/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言中基本数据类型的变量内存占用
 * 目的：熟悉sizeof运算符的使用
 */
#include <stdio.h>




int main(void)
{
	int len;
	
	len = sizeof(char);
	printf("sizeof(char) 	= %d.\n", sizeof(char));
	
	len = sizeof(short);
	printf("sizeof(short) 	= %d.\n", sizeof(short));
	
	len = sizeof(int);
	printf("sizeof(int) 	= %d.\n", sizeof(int));
	
	len = sizeof(long);
	printf("sizeof(long) 	= %d.\n", sizeof(long));
	
	len = sizeof(float);
	printf("sizeof(float) 	= %d.\n", sizeof(float));
	
	len = sizeof(double);
	printf("sizeof(double) 	= %d.\n", sizeof(double));
	
	return 0;
}

















