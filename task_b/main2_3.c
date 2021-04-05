#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <syslog.h>
#include <sched.h>

int main()
{

	pid_t pid = fork();

	if (pid == 0)
	{		 //in child
		chdir("/"); //change dir to root
		setsid();	 //set new session from father
		printf("And then the Da3m0n $lay3r came...");
		close(stdin); // output channels
		close(stdout);
		close(stderr);

		openlog("DaemonSlayer", LOG_PID, LOG_DAEMON); // open lo
		syslog(LOG_NOTICE, "LilDaemon_IsOn");
		usleep(3000000);
		syslog(LOG_NOTICE, "LilDaemon_Playing");
		usleep(3000000);
		syslog(LOG_NOTICE, "LilDaemon_SaysByeBye");
	}
	else
	{
		printf("Daemon PID -> %d\n", pid);
	}

	return 0;
}
