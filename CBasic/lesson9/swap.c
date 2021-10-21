/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言指针和函数传参的结合
 * 目的：使用指针在子函数中交换2个数的值
 */
#include <stdio.h>

int main(void)
{
	int x, y;
	
	x = 5;
	y = 3;
	
	printf("before swap: x = %d, y = %d.\n", x, y);
	
	//swap(x, y);
	swap_pointer(&x, &y);
	
	printf("after  swap: x = %d, y = %d.\n", x, y);
}

// 要完成的功能：在函数内部，交换a和b的值
// 测试结果：交换成功。
// 原因：C语言函数调用时，一直都是传值调用。也就是说实际传递的一直都是实参的拷贝
// 但是本函数中的形参和实参都并不是x和y，而是x和y的地址值。这样，让我们在函数中
// 通过间接访问*p的方式，在函数内访问到了函数外面调用时的实参。
int swap_pointer(int *p1, int *p2)
{
	int temp;
	
	temp = *p1;		// 实际调用时，p1得到的实参是x的地址&x， *p1代表的就是x
	*p1 = *p2;
	*p2 = temp;
	
	return 0;
}




// 要完成的功能：在函数内部，交换a和b的值
// 实际测试结果：失败，并没有交换。
// 原因：C语言中，函数调用时，实参传递给形参实际是传值调用。也就是说，实参x和y将
// 自己的值拷贝一份传给形参a和b，在子函数swap中实际得到交换的是a和b，而不是实参x
// 和y，因此函数执行完后，x和y的值依然，并没有被交换。
int swap(int a, int b)
{
	int temp;
	
	temp = a;		// a是swap内的形参，实际调用时得到的是实参x的一份拷贝，只是和
	a = b;			// x的值相等而已，其他并无任何关联，因此在这里不能访问到x
	b = temp;

	return 0;
}


