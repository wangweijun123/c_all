/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言中全局变量和局部变量分别怎么使用
 */
#include <stdio.h>

void func1(void);

// 全局变量的特点：在整个文件中所有的函数内都可以访问该全局变量，而且访问的都是该
// 全局变量本身。如果你在之前某个函数中更改了它的值，则后面再引用时它的值就是前面
// 那次更改之后的值。
int g_a;


int main(void)
{
	printf("g_a = %d.\n", g_a);			// 0
	func1();
	printf("g_a = %d.\n", g_a);			// 100
	
	g_a += 1;
	printf("g_a = %d.\n", g_a);			// 101
	
	
	return 0;
}

void func1(void)
{
	g_a = 100;
}












