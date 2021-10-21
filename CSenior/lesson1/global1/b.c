/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言中static静态的局部变量和非静态的局部变量的区别
 */
#include <stdio.h>


void func_in_a(void);
extern int g_a;				// 声明了一个int变量g_a
//extern int g_b;

void func_in_b(void)
{
	printf("I am func in b.c.\n");
}


int main(void)
{
	printf("I am main in a.c.\n");
	printf("I am main in a.c, g_a = %d.\n", g_a);
	printf("I am main in a.c, g_a = %d.\n", g_b);
	
	
	//func_in_b();		// 直接调用
	
	func_in_a();		// 间接调用
	
	return 0;
}








