/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：结构化设计-选择结构示例代码
 * 题目：算一下10！（10*9*8*7*····1）
 */
 
 
#include <stdio.h>


int main(void)
{
	int i, val;
	
	/*
	for (i=1,val=1; i<=10; i++)
	{
		val *= i;
		printf("i = %d.\n", i);		// 使用printf进行调试
	}
	*/
	/*
	for (i=1,val=1; i<11; i++)
	{
		val *= i;					// 这种写法更普遍
		// val = val * i;			// 这种写法也可以，但是一般除了新手不采用
		printf("i = %d.\n", i);		// 使用printf进行调试
	}
	*/
	
	for (i=10,val=1; i>=1; i--)
	{
		val *= i;
		printf("i = %d.\n", i);		// 使用printf进行调试
	}
	
	
	printf("val = %d.\n", val);
	
	return 0;
}