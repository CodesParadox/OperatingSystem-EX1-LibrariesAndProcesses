########################################################################
##########################  Makefile  ##################################
########################################################################

CC = gcc
FLAGS = -Wall -g
SR = -shared -fPIC

all: Subtask1.1 Subtask1.2 Subtask1.3

Subtask1.1: main1_1.c hello_ariel.c hello_ariel.h
	$(CC) -o Subtask1.1 main1_1.c hello_ariel.c

Subtask1.2: main1_1.c libHello.so 
	$(CC) main1_1.c -L. ./libHello.so -o Subtask1.2

Subtask1.3: main1_3.c hello_ariel.c hello_ariel.h 
	$(CC) main1_3.c -fPIC -ldl -o Subtask1.3

libHello.so:  hello_ariel.c hello_ariel.h
	$(CC) -o libHello.so -shared -fPIC hello_ariel.c 

.PHONY: clean all

clean: -rm -f *.o *.so Subtask1.1 Subtask1.2 Subtask1.3 2>/dev/null

