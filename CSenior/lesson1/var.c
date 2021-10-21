/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言中全局变量和局部变量
 * 目的：区分什么是全局变量，什么是局部变量
 */
#include <stdio.h>

int func(void);

int g_a = 5;			// g_a定义在函数外面，因此是全局变量

int main(void)
{
	int a;			// a定义在main函数中，所以是局部变量
	
	a = 23;
	printf("a = %d, g_a = %d.\n", a, g_a);
	
	printf("g_a = %d.\n", g_a);
	
	//func();
	
/*
	int i;
	for (i=0; i<10; i++)
	{
		int b = 5;		// b定义在这里，则作用域只有for后面的{}里面，外面是看不见的
		
		b++;
	}
	printf("b = %d.\n", b);
	
*/	
	
	return 0;
}




int func(void)
{
	int i;
	int j;
	int k;
	
	//i = a;		// a是main函数中定义的局部变量，它的作用域只有main函数中的代码块
				// 因此在这里不能访问a
	return i;
}









