
########################################################################
##########################  Makefile  ##################################
########################################################################

CC = gcc
FLAG = -Wall -g
LIBFLAG = -Wall -g -shared

all: main2_4

main2_4: main2_4.c nested clone daemon
	$(CC) -o main2_4 main2_4.c

nested: main2_1.c
	$(CC) -o nested main2_1.c

clone: main2_2.c
	$(CC) -o clone main2_2.c

daemon: main2_3.c
	$(CC) -o daemon main2_3.c

.PHONY: clean all

clean:
	-rm -f *.o main2_4 nested clone daemon 2>/dev/null

