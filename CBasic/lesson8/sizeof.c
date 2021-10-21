/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言sizeof运算符的演示
 */
#include <stdio.h>


int main(void)
{
	int len;
	
	// sizeof测试数组变量的内存占用
	int a[5];
	len = sizeof(a);					// 4*5 = 20
	len = sizeof(a)/sizeof(a[0]);		// 4*5/4=5

/*
	// sizeof测试类型占用内存
	//len = sizeof(int);				// 4 单位是字节
	//len = sizeof(float);				// 4 单位是字节
	len = sizeof(double);				// 8 单位是字节
	len = sizeof(char);					// 1 单位是字节
	
	// sizeof测试变量占用内存
	double d;
	len = sizeof(d);					// 8 单位是字节
*/	
	
	printf("len = %d.\n", len);
}










