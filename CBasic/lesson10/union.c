/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言结构体定义的演示
 * 目的：初步了解结构体的定义方式，及含义
 */
#include <stdio.h>


// 定义共用体类型
union MyUnion
{
	int a;
	char b;
	float c;
};



int main(void)
{
	union MyUnion u1;		// 使用自定义的union类型来定义变量
	
	u1.a = 12933;
	
	printf("u1.a = %d, u1.b = %d.\n", u1.a, u1.b);
	
	return 0;
}








