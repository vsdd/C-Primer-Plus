#include<stdio.h>
#include<inttypes.h>

int main(void)
{
	int32_t me32;//me是一个32位有符号整型变量
	printf("First, assume int32_t is int:") ;
	printf("me32 = %d\n", me32);
	printf("Next, Let’s not make any assumptions.\n");
	printf("Instead, use a \"macro\" from inttypes.h:");
	printf("me32 = %" PRId32 "\n",me32); //一些编译器任未实现inttypes.h头文件及县官功能 
	
	return 0;
	
}
