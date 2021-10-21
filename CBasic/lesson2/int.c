/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言数据类型-整形 代码演示
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	// 定义整形变量
	int a;				// 定义了一个整形变量a
	int b;				// 定义了一个整形变量b
	int c;				// 定义了一个整形变量c
	
	a = 12;				// 赋值语句，将=右边的12赋值给左边的变量a
	b = 23;
	c = a + b;			// 运算式，先a+b，然后将和赋值给c
	//printf("a = %d.\n", a);
	//printf("b = %d.\n", b);
	printf("c = %d.\n", a);		// c = 35.
	
	return 0;
}



