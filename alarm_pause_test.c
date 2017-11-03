#include <stdio.h>

static void sighandler(int signo);
{
	/*nothing to do, just return to wake up the pause*/
}

unsigned int sleepl(unsigned seconds)
{
	if(signal(SIGALRM, sighandler) == SIG_ERR)
	{
		return seconds;
	}

	alarm(seconds);		 //start the timer
	pause();		     //next caught signal wakes up
	
	return (alarm(0));   //return remained seconds
}

