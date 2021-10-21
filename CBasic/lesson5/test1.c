/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：结构化设计-选择结构示例代码
 * 功能：给定三个数，打印出其中最大的那个数
 */
#include <stdio.h>

// 使用了选择结构的嵌套
int main(int argc, char **argv)
{
	int a, b, c, max;
	
	a = 12;
	b = 45;
	c = 23;
	
	if (a > b)
	{
		// a和b中，a较大
		if (a > c)
		{
			max = a;
		}
		else
		{
			max = c;
		}
	}
	else
	{
		// a和b比，b较大
		if (b > c)
		{
			max = b;
		}
		else
		{
			max = c;
		}
	}
	
	printf("max = %d.\n", max);
	
	return 0;
}

















