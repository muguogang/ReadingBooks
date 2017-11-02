#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>

static void usr_signal_handler(int signo);

int main(void)
{
	if(signal(SIGUSR1, usr_signal_handler) == SIG_ERR)
	{
		perror("can't catch SIGUSR1");
	}
	
	if(signal(SIGUSR2, usr_signal_handler) == SIG_ERR)
	{
		perror("can't catch SIGUSR2");
	}

	for( ; ;)
	{
		pause();
	}

	return 0;
}


static void usr_signal_handler(int signo)
{
	if(signo == SIGUSR1)
	{
		printf("Received SIGUSR1\n");
	}
	else if(signo == SIGUSR2)
	{
		printf("Received SIGUSR1\n");
	}
	else
	{
		printf("Received signal %d\n", signo);
	}

}
