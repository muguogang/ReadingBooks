#include "apue.h"

static void my_exit1(void);
static void my_exit2(void);

int main(void)
{
	if( atexit(my_exit2) != 0 )
	{
		DEBUG_PRINT("Can't regitster my_exit2");
	}

	if( atexit(my_exit1) != 0 )
	{
		DEBUG_PRINT("Can't regitster my_exit1");
	}

	if( atexit(my_exit1) != 0 )
	{
		DEBUG_PRINT("Can't regitster my_exit1");
	}

	printf("main is done!\n");

	return 0;
}

static void my_exit1(void)
{
	printf("First exit handler\n");
}

static void my_exit2(void)
{
	printf("Second exit handler\n");
}

