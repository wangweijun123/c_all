/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：结构化设计-选择结构示例代码
 * 功能：计算1+2+3+····+10
 */
#include <stdio.h>


// 
int main(void)
{
	int a, sum;
	
	sum = 0;
	
	// 使用for循环来计算，可以避免重复输入等机械操作
	for (a=1; a<=56; a++)
	{
		sum = sum + a;
	}
	
	printf("sum = %d.\n", sum);
}













