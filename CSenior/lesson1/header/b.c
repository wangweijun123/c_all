/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言中头文件使用的demo
 */
#include <stdio.h>
#include "a.h"			// 头文件包含



/*
// 在没有头文件时，需要使用别的.c文件中定义的函数时，都要先在本文件中
// 先去声明该函数的原型，否则编译器要叫。所以多了的话很麻烦
int add(int a, int b);
int sub(int a, int b);
*/


int main(void)
{
	int a = 23, b = 43;
	
	g_a = 111;
	
	printf("g_a = %d.\n", g_a);
	
	printf("a + b = %d.\n", add(a, b));
}










