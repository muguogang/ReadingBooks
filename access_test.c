#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Input error!!!\nusage:./a.out <pathname>\n");
		return -1;
	}

	if(access(argv[1], R_OK) < 0)	
		printf("access error for %s", argv[1]);
	else
		printf("read access OK\n");

	if(open(argv[1], O_RDONLY) < 0)
		printf("open error for %s", argv[1]);
	else
		printf("open for reading OK\n");

	return 0;
}


