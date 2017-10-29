#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define RWRWRW (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)


//this test file shows how umask() works
int main(int argc, char *argv[])
{
	umask(0);
	if(creat("foo", RWRWRW) < 0)
	{
		perror("creat foo failed!!!\n");
		return -1;
	}
	
	umask(S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH);
	if(creat("bar", RWRWRW) < 0)
	{
		perror("creat bar failed!!!");
		return -1;
	}

	return 0;
}


