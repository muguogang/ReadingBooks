#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(void)
{
	FILE *fp; //定义一个流指针
	
	if((fp = fopen("1.txt", "r+") ) == NULL)
	{
		//perror("Failed to fopen 1.txt "); //输出错误信息
		printf("failed to fopen: error_num = %d: %s\n", errno, strerror(errno) );
		return -1;
	}
	printf("Open 1.txt successfully!\n");

	fclose(fp);

	return 0;
}
