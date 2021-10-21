/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：结构化设计-选择结构示例代码 switch case演示
 */
#include <stdio.h>


// 题目：输入数字1，打印a；输入2，打印b，依次类推直到z
int main(void)
{
	int num;
	
	num =7;
	
	// 使用switch case语句来完成相同功能：
	switch (num)
	{
		case 1:
			printf("a\n");
			break;
		case 2:
			printf("b\n");
			break;
		case 3:
			printf("c\n");
			break;
		case 4:
			printf("d\n");
			break;
		case 5:
			printf("e\n");
			break;
		case 6:
			printf("f\n");
			break;
		case 7:
			printf("g\n");
			break;
		default:
			printf("------\n");
			break;
	}

/*	
	if (num == 1)
	{
		printf("a\n");
	}
	else if (num == 2)
	{
		printf("b\n");
	}
	else if (num == 3)
	{
		printf("c\n");
	}
	else if (num == 4)
	{
		printf("d\n");
	}
	else if (num == 5)
	{
		printf("e\n");
	}
	else if (num == 6)
	{
		printf("f\n");
	}
	else if (num == 7)
	{
		printf("g\n");
	}
	else
	{
		printf("------\n");
	}
*/
	
	return 0;
}











