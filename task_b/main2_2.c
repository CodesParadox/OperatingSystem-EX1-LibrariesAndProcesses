#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <sched.h>
#include <unistd.h>
#include <sys/types.h>

#define SIZEOFSTACK 10000
#define CYCLES 10
#define ZMAN 1000000
char childStack[SIZEOFSTACK + 1];

void print(const char *t)
{
	int i = 0;
	for (i = 0; i < CYCLES; i++) // use to clone processes and fork that are runing
	{
		printf("Hello from %s\n", t);
		usleep(ZMAN);
	}
}

int child(void *p) { print("Child Thread"); }
int child2(void *p) { print("Child Thread 2"); }

int main()
{

	int result = clone(child, childStack + SIZEOFSTACK, CLONE_PARENT, 0); // run child in childstack
	int result2 = clone(child2, childStack + SIZEOFSTACK, CLONE_PARENT, 0);
	printf("Clone result = %d\n", result);
	printf("Clone result 2 = %d\n", result2);
	print("Parent");

	return 0;
}
