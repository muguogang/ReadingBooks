#include <stdio.h>

typedef enum {
	false = 0,
	true  = 1,
}bool_t;

bool_t IsEven(int val)
{
	if((val%2) != 0)
		return false;
	else
		return true;
}

int main(int argc, char *argv[])
{
	int val = 0;

	printf("Please input a number:\n");
	scanf("%d", &val);
	
	if(IsEven(val))
		printf("It is a even number\n");
	else
		printf("It is a odd number\n");
	
	return 0;
}
