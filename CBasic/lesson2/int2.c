/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言数据类型-整形 代码演示
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	// 定义整形变量
	/*
	int a;				// 定义了一个整形变量a
	int b;				// 定义了一个整形变量b
	int c;				// 定义了一个整形变量c
	*/
	int a, b, c;		// 一次定义三个整形变量a b c
	
	a = 25;				// 赋值语句，将=右边的12赋值给左边的变量a
	b = 5;
	c = a / b;

	
	printf("c = %d.\n", c);		// c = 5.
	printf("a = %d, b = %d, c = %d.\n", a, b, c);
	
	b = 4;
	c = a / b;
	// 整形变量始终是整数，如果你强制给他一个小数，它会自己把小数部分丢掉
	// 只剩下整数部分。
	printf("c = %d.\n", c);		// c = 6.
	printf("a = %d, b = %d, c = %d.\n", a, b, c);
	
	return 0;
}









