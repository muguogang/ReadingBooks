#include <stdio.h>

int main(int argc, char *argv[])
{
	int c;

	while( (c = getc(stdin) ) != EOF)
	{	
		if(putc(c, stdout) == EOF)
			perror("putc error\n");
	}
	if( ferror(stdin) )
		perror("input error\n");

	return 0;
}
