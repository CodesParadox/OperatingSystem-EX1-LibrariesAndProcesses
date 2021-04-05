#include <stdlib.h>
#include <stdio.h>
#include <sched.h>
#include <unistd.h>
#include <sys/types.h>

void print(const char *str)
{
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		printf("Hello from %s\n", str);
		usleep(1000000);
	}
}

int main()
{
	//create child
	pid_t pid = fork();

	if (pid < 0)
	{
		fprintf(stderr, "Error Error Error try again Error later");
		return 0;
	}

	if (pid == 0)
	{		         //if the child exist
		pid_t pid = fork(); // creating grandchild
		if (pid == 0)
		{ //check on grandchild
			print("grand-child");
		}
		else
		{
			print("child");
		}
	}
	else
	{
		print("parent");
	}

	return 0;
}
