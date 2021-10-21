/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言数据类型-字符型 代码演示
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	char c1 = 'A';
	
	// printf中，打印字符类型时，使用%d则按照十进制的方式打印，打印出来的是该字符
	// 对应的ASCII码值；使用%c来打印，则打印出的是该字符的符号。
	printf("c1 = %d, c1 = %c.\n", c1, c1);
	
	c1 = c1 + 5;
	printf("c1 = %d, c1 = %c.\n", c1, c1);	// c1 = 70, c1 = F
	
	return 0;
}

