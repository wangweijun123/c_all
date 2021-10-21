/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言宏定义的演示
 * 目的：理解宏定义及其使用
 */
#include <stdio.h>

#define N (10)			// 宏定义

#define M (10 + N)

#define PI	(3.14)

#define S(r) (PI * (r) * (r))		// 计算园面积的宏
#define L(r) (2 * PI * (r))			// 计算圆的周长的宏

// 题目，使用宏定义定义一个宏，表示一年中的秒数
#define SEC_PER_YEAR (365 * 24 * 60 * 60)UL


int main(void)
{
	int a[N] = {1, 2, 3};
	int b[N];
	int c[N];
	
	
	printf("sizeof(c) = %d.\n", sizeof(c));

/*
	int a;
	
	a = 123;
	a = N;
	
	
	printf("a = %d.\n", a);
*/
	
	return 0;
}








