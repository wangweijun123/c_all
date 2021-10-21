/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：结构化设计-选择结构示例代码
 * 题目：计算100以内所有奇数的和
 */
 
 
#include <stdio.h>


int main(void)
{
	int i, sum;
	
	for (i=1,sum=0; i<100; i+=2)
	{
		sum += i;
		//printf("i = %d.\n", i);		// 使用printf进行调试
	}
	
	printf("sum = %d.\n", sum);
	
	return 0;
}
 
 
 
 
 
 
 
 