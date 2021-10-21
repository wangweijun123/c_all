/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言指针的简单演示
 * 目的：让大家直观的体会指针变量的使用效果
 */
#include <stdio.h>


int main(void)
{
	int a = 23;
	int b = 0;
	int *p;					// 定义了一个int型的指针变量p	
	
	p = &a;					// 相当于p = (&a); p中存的是变量a的地址
	
	//*p = 111;				// 相当于a = 111; 
	b = *p;				
	
	printf("a = %d.\n", a);
	printf("b = %d.\n", b);
	printf("p = %p.\n", p);	// %p用于打印指针变量的值
	
	return 0;
}












