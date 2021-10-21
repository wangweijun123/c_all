/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：结构化设计-循环结构示例代码 do while循环演示
 * 题目：计算100以内所有奇数的和
 */
#include <stdio.h>


int main(void)
{
	int i, sum;
	
	i = 1;
	sum = 0;
	
	do
	{
		printf("i = %d.\n", i);
		sum += i;
		i += 2;
	}while (i < 100);				// 主要do while循环这里有个分号
	
	printf("sum = %d.\n", sum);
	
	return 0;
}














