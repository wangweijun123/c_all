/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言中static静态的局部变量和非静态的局部变量的区别
 */
#include <stdio.h>


int g_i = 13;


// 实验结论：
// 首先，main函数是一个程序运行最开始执行的东西，所有的其他函数都只能在main函数中被
// 直接或者间接的调用才能被执行。main函数的执行其实就是整个程序的生命周期，main函数
// 一return返回，整个程序就结束了。
// 其次，全局变量的定义和初始化是在main函数运行之前发生的。
int main(void)
{	
	printf("g_i = %d.\n", g_i);
	
	return 0;
}










