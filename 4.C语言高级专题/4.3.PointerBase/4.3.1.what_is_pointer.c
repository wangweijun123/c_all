#include <stdio.h>


int main(void)
{
	// 演示指针的标准使用方式
	// 指针使用分3步：定义指针变量、给指针变量赋值（绑定指针）、解引用
	int a = 23;
	// 第一步，定义指针变量
	int *p;
	printf("p = %p.\n", p);		// %p打印指针和%x打印指针，打印出的值是一样的
	printf("p = 0x%x.\n", p);
	
	
	// 第二步，绑定指针，其实就是给指针变量赋值，也就是让这个指针指向另外一个变量
	// 当我们没有绑定指针变量之前，这个指针不能被解引用。
	p = &a;				// 实现指针绑定，让p指向变量a
	p = (int *)4;		// 实现指针绑定，让p指向内存地址为4的那个变量
	
	// 第三步，解引用。
	// 如果没有绑定指针到某个变量就去解引用，几乎一定会出错。
	*p = 555;			// 把555放入p指向的变量中
	
	
	
/*
	// a的实质其实就是一个编译器中的符号，在编译器中a和一个内存空间联系起来
	// 这个内存空间就是a所代表的那个变量。
	int a;			// 定义了int型变量，名字叫a
	int *p;			// 定义了一个指针变量，名字叫p，p指向一个int型变量
	
	a = 4;			// 可以操作
	p = 4;			// 编译器不允许，因为指针变量虽然实质上也是普通变量，但是它的
					// 用途和普通变量不同。指针变量存储的应该是另外一个变量的地址
					// 而不是用来随意存一些int类型的数。
	
	p = (int *)4;	// 我们明知道其实就是数字4，但是我强制类型转换成int *类型的4
					// 相当于我告诉编译器，这个4其实是个地址（而且是个int类型变量
					// 的地址），那么(int *)4就和p类型相匹配了，编译器就过了。
*/	
	
	return 0;
}
























