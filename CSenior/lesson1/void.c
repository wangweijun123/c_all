/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言中整形和浮点型在内存中存储方式的不同
 * 目的：了解存储和取时数据类型必须相同的重要性
 */
#include <stdio.h>


void test(void);


int main(void)
{
/*
	test();
*/
	int a =  444;
	void *pVoid;
	
	pVoid = &a;
	
	printf("*pVoid = %d.\n", *(int *)pVoid);			// 对的		
	printf("*pVoid = %f.\n", *(float *)pVoid);			// 错误的
/*
 * 注意，void *类型的指针，可以指向任意类型的数。但是程序员使用的时候心里必须非常
 * 清楚，存放时和取时数的类型必须相同。如果不相同，编译器是没法发现的，结果都要
 * 程序员自己负责。
 */

	
	return 0;
}

// void类型参数和返回值，表示不需要
void test(void)
{
	printf("I am a void test.\n");
}




