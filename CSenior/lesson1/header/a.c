/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言中头文件使用的demo
 */
#include <stdio.h>
#include "a.h"

int add(int a, int b)
{
	printf("I am in a.c, g_a = %d.\n", g_a);
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}














