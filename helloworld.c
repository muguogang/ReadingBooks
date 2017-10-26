//This function don't not have return value
//So, the return value could be a random value depend
//Do "./a.out", then do "echo $?", you will see the random value
//Do "gcc -std=c99 helloworld.c ", then the value will be 0;

#include <stdio.h>

main()
{
	printf("hello world\n");

}
