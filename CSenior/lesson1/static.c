/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言中static静态的局部变量和非静态的局部变量的区别
 */
#include <stdio.h>


void func1(void);
void func_static(void);
void func_static2(void);
void func_global(void);
void func_register(void);

int g_a = 1;


int main(void)
{
	//a = 4;			// 编译报错，未定义
	g_a = 5;			// 可以，因为g_a是全局变量，所以到处都可以用

	func1();		// i = 2
	func1();		// i = 2
	func1();		// i = 2
	
	func_static();	// a = 2
	func_static();	// a = 3
	func_static();	// a = 4
	
	func_static2();	// a = 4;
	func_static2();	// a = 7;
	func_static2();	// a = 10;
	
	func_global();	// g_a = 4;
	func_global();	// g_a = 7;
	func_global();	// g_a = 10;
	
	func_register();
	func_register();
	func_register();
	
	
	
	
// 因为i是定义在函数func中的局部变量，所以i的作用域为代码块作用域，所以i只在func1
// 函数内部有效，在func1外面是不能访问i的。所以这里i会无定义。
	//i = 5;		// error: ‘i’ undeclared (first use in this function)
	
	return 0;
}


void func1(void)
{
	int i = 1;				// 普通的局部变量，auto可以省略的
	//auto int i = 0;			// 自动局部变量，其实就是普通局部变量
	
	i++;
	
	printf("i = %d.\n", i);
}

void func_static(void)
{
	static int a = 1;		// 静态的局部变量
	
	a++;
	
	printf("a = %d.\n", a);
}

void func_static2(void)
{
	static int a = 1;		// 静态的局部变量
	
	a += 3;
	
	printf("a = %d.\n", a);
}

void func_global(void)
{
	g_a += 3;
	
	printf("g_a = %d.\n", g_a);
}

void func_register(void)
{
	register int a = 1;		// 静态的局部变量
	
	a += 3;
	
	printf("a = %d.\n", a);
}
















