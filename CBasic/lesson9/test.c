/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言指针的简单演示
 * 目的：演示指针的定义赋值及初始化
 */
#include <stdio.h>


int main(void)
{
	int a = 1111;
	
	int *p1;			// 没错
	int* p2;			// 可以
	int * p3;			// 可以，而且三种写法效果一样
	
	p3 = &a;
	*p3 = 321;
	printf("a = %d.\n", a);


/*
	float a = 23;
	
	int *p = &a;			// 错误，类型不匹配
				// warning: initialization from incompatible pointer type
*/



	
	return 0;
}