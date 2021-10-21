/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言结构体定义的演示
 * 目的：初步了解结构体的定义方式，及含义
 */
#include <stdio.h>


// 注意：
// 1、结构体类型的定义是在函数外面，不是里面
// 2、结构体定义的是一个新的组合类型，而不是变量，也不消耗内存。
//    稍后在定义变量的地方，再使用该结构体类型来定义变量。
struct Student
{
	char name[20];				// 学生姓名
	unsigned int num;			// 学号
	int isMale;					// 性别
};

struct MyStruct
{
	int a;
	char c;
	float f;
	double d;
};						// 注意这里的;不能少

struct ArrayStruct
{
	int a;
	int b;
	int c;
	int d;
};




int main(void)
{
/*
	int a[4];
	ArrayStruct s1;
*/

	//struct MyStruct s = {100, 'd', 12.445, 111.111111111111};	// ok
	//struct MyStruct s = {100; 'd'; 12.445; 111.111111111111};	// 不行
	
	
/*	
	// 这种部分ok的是最危险的，千万不用。

	struct MyStruct s = 
		{
			s.a = 1444, 					// 只能从前到后依次初始化，重要只要空
			s.c = 'k', 						// 一个，后面的就遭殃了
			s.f = 3.13,
			//s.d = 32.222222,
		};										// 部分ok
*/	
/*	
	struct MyStruct s = 
		{
			s.a = 1444; 					
			s.c = 'k'; 						
			s.f = 3.13;
			s.d = 32.222222;
		};										// 不行，初始化式中分号不好用
*/
/*
	struct MyStruct s = 
		{
			//.a = 1444, 					
			.c = 'k', 						
			.f = 3.13,
			.d = 32.222222,
		};									// ok
*/
/*
	struct MyStruct s = 
		{
			a = 1444, 					
			c = 'k', 						
			f = 3.13,
			d = 32.222222,
		};									// 错误，.是不能省略的
*/
/*
	struct MyStruct s = 
		{
			. = 1444, 					
			. = 'k', 						
			. = 3.13,
			. = 32.222222,
		};			
*/								// 不行，.后面的元素名不可省略。


	

	printf("s.c = %c, s.d = %f.\n", s.c, s.d);
/*
	struct MyStruct s;			// 先定义变量，定义同时无初始化
	
	s.a = 1444;					// 定义之后再赋值
	s.c = 'k';
	s.f = 3.1415;
	s.d = 3.423246;
	
	s.a += 100;	
	printf("s.a = %d.\n", s.a);
	
	//s.c = 'y';
	printf("s.c = %c.\n", s.c);
*/

/*
	struct Student s1;			// s1是一个变量，类型是struct Student
	
	// 给结构体变量赋值
	s1.name[0] = 'J';
	s1.name[1] = 'i';
	s1.name[2] = 'm';
	s1.name[3] = '\0';
	
	s1.num = 123;
	s1.isMale = 1;
	
	// 打印检验看对不对
	printf("s1.name = %s, s1.num = %d, s1.isMale = %d.\n", 
			s1.name, s1.num, s1.isMale);
*/


	
	return 0;
}





