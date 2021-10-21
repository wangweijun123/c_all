/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言数学运算符 代码演示
 *  	主要演示了 + - * / %等几个运算符
 */
#include <stdio.h>


int main(void)
{
	int a, b, c, d, e;
	
	a = 13;
	b = 4;
	c = 7;
	
	d = a + b / c;			// C语言中，运算优先级等同于数学中，所以先乘除后加减
	e = (a + b) / c;		// 先算括号括起来的部分
	
	printf("d = %d, e = %d.\n", d ,e);

/*
	int a, b, c, d;
	
	a = 17;
	b = 4;
	c = a / b;		// 除
	d = a % b;		// 取余
	
	printf("a = %d, b = %d, c = %d, d = %d.\n", a, b, c, d);
	// a = 17, b = 4, c = 4, d = 1.
*/	
	return 0;
}





















