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
	int i;			// 定义了之后，i的值是多少？
	int sum;

	printf("i = %d.\n", i);
	
	//for ();		// error: expected expression before ‘)’ token
	//for (;;);		// 可以，死循环
	
	for (i=0,sum=0; i<10; i++)
	{
		sum += i;
	}
	printf("sum = %d.\n", sum);

	return 0;
}






