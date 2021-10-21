/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言字符数组的演示
 */
#include <stdio.h>


int main(int argc, char **argv)
{
	int i = 0;
	
	char a[] = {97, 98, 99, 100, 101};		// 5
	char b[] = "abcde";						// 6
	
	printf("sizeof(a) = %d, sizeof(b) = %d.\n", sizeof(a), sizeof(b));

/*	
	//char a[5];			// 定义一个包含5个字符的字符数组
	//char a[5] = {'a', 'b', 'c', 'd', 'e'};		// 定义并初始化一个字符数组
	//char a[5] = {97, 98, 99, 100, 101};			// 与上面效果一样
	//char a[] = {97, 98, 99, 100, 101};				// 以上面效果一样
	//char a[];				// 错误，因为编译器无法推论出数组的长度
	//char a[] = "abcde";			// 字符串方式来初始化字符数组
	
	
	for (i=0; i<5; i++)
	{
		printf("a[%d] = %d		%c.\n", i , a[i], a[i]);
	}
*/

	
	return 0;
}
















