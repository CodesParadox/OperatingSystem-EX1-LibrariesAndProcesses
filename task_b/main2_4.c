#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sched.h>
#include <syslog.h>

#define STACK 10000
#define CYCLES 10
#define MIL 1000000

char childStack[STACK + 1];

void print(const char *t)
{
	int i = 0;
	for (i = 0; i < CYCLES; i++)
	{
		printf("Hello from %s\n", t);
		usleep(MIL);
	}
}

int nesting(void *p)
{
	char *args[2] = {"./nested", NULL};
	execvp(args[0], args);
	print("Nesting");
}

int cloning(void *p)
{
	char *args[2] = {"./clone", NULL};
	execvp(args[0], args);
	print("Cloning");
}

int main()
{

	int result = clone(nesting, childStack + STACK, CLONE_PARENT, 0);
	printf("Starting Nested -> %d\n", result);
	int result2 = clone(cloning, childStack + STACK, CLONE_PARENT, 0);
	printf("Starting Cloned -> %d\n", result2);

	char *args[4] = {"./daemon", NULL};
	execvp(args[0], args);

	return 0;
}
