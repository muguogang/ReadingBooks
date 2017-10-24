#include <stdio.h>

//method 1：
//#define DEBUG_PRINT(fmt, args...) do{printf("DBGInfo: %s-%d:\n"fmt, __FUNCTION__, __LINE__, ##args);}while(0)

//method 2:
#define DEBUG_PRINT(fmt, args...) \
do{\
	printf("DBGInfo: %s-%d:\n"fmt, __FUNCTION__, __LINE__, ##args);\
}while(0)

int main(int argc, char *argv[])
{
	int yy = 2017;
	int mm = 10;
	int dd = 24;

	DEBUG_PRINT("Today is %4d-%2d-%d\n", yy, mm, dd);

	return 0;
}
