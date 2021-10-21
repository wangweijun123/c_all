/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言中多文件项目
 */
#include <stdio.h>



void func_in_b(void);

int g_a = 12;
int g_b = 111;






void func_in_a(void)
{
	
	g_a = 24;
	
	printf("I am in func_in_a of a.c, g_a = %d.\n", g_a);
	func_in_b();
}

/*
// 定义错误
// C语言中，定义函数都必须在外面，不能在一个函数里面定义别的函数
// 所以没有局部函数，只有全局函数。

void func1(void)
{
	int a;
	
	
	void func2()
	{
		int b;
	}
}

*/









