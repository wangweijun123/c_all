/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：结构化设计-选择结构示例代码
 */
#include <stdio.h>


int main(void)
{
	int a, b, max;		
	
	a = 33333;
	b = 333;
	if (a > b)			// 判断表示式
	{
		max = a;	
		printf("true\n");		// 调试方法：在不同分支或者需要处自定打印一些数据
	}							// 然后运行后根据打印内容，来分析程序的实际走向
	else if (a == b)			// 和运行情况，以此来做调试分析。
	{
		max = a;
		printf("a == b\n");
	}
	else
	{
		max = b;
		printf("false\n");
	}
	printf("max = %d.\n", max);
	
	return 0;
}









