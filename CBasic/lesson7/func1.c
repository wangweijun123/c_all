/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言函数的演示
 * 题目：写个计算器
 */
#include <stdio.h>

// 函数声明
int add(int a, int b);			// 函数声明后面必须有分号		
int sub(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);


int main(void)
{
	int a, b , c;
	int i1, i2;
	
	float f1, f2;
	
	f1 = 12.34;
	f2 = 56.78;
	
	a = 23;
	b = 122;
	
	i1 = 2;
	i2 = 3;
	
	c = sub(b, a);		// 实参给形参传参的时候，按顺序传参的，不是名字
	// 就是说，实参的第一个参数实际传给了形参列表的第一个形参，而实参的第二个参数
	// 实际传给了形参列表的第二个参数。以此类推。
	// 实参的名字和形参的名字一点关系都没有，只是按照顺序依次赋值传参而已。
	// 实参的类型必须和形参类型相同，否则就可能会出错。
	
	// 函数调用，调用已经写好的函数模块，来完成既定功能
	//c = add(a, b);				// 算加法时
	//c = sub(a, b);				// 算减法时
	//c = multiply(a, b);			// 算乘法时
	//c = divide(a, b);			// 算除法时
	
	printf("c = %d.\n", c);					// 函数先赋值给变量再使用
	printf("a - b = %d.\n", sub(a, b));		// 直接把函数调用作为一个整体使用
	
	return 0;
}


// 函数定义，又叫函数实现
int add(int a, int b)				// 函数定义后面没分号，但是有{}和函数体
{
	return a + b;
}

// 函数定义，又叫函数实现
int sub(int a, int b)
{
	return a - b;					// 函数体，实际上就是函数实现
}

// 函数定义，又叫函数实现
int multiply(int a, int b)
{
	return a * b;
}

// 函数定义，又叫函数实现
int divide(int a, int b)
{
	return a / b;
}














