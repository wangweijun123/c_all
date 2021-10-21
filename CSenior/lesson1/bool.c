/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言中bool类型
 */
#include <stdio.h>

// 在bool类型的世界，除了0是假之外，其余数都是1，都是真

int main(void)
{
	int a;
	
	a = -222;
	
	if (a)
	{
		printf("a = %d.\n", a);
	}
	
	return 0;
}







