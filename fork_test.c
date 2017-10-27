#include "apue.h"
#include "unistd.h"
#include "stdlib.h"

int globvar = 6; //external variable in initialized data
char buf[] = "a write to stdout\n";

int main (void)
{
	int var;    //automatic variable in the stack
	pid_t pid;

	var = 88;
	if(write(STDOUT_FILENO, buf, sizeof(buf)-1) != sizeof(buf)-1)
		DEBUG_PRINT("Write error");
	printf("before fork\n");  //we don't flush stdout

	if((pid = fork()) < 0)
	{
		DEBUG_PRINT("fork error");
	}
	else if(pid == 0) 		  //child process
	{
		globvar++;			  //modify variables
		var++;
	}
	else
	{
		sleep(2); 			  //parent process
	}
	
	printf("pid = %ld, glob = %d, var = %d\n", (long)getpid(), globvar, var);
	
	exit(0);
}
