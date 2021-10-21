/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言数据类型-浮点型 代码演示
 */
#include <stdio.h>

int main(int argc, char **argv)
{
/*
	float f1 = 3.14;
	
	// printf中打印浮点型，要使用%f，不能用d%
	printf("f1 = %f.\n", f1);
	
	f1 = 3.14159265781;		// float精度不够，所以给我按照精度取舍了
	printf("f1 = %2.10f.\n", f1);
*/


	double f1 = 123.14;
	
	// printf中打印浮点型，要使用%f，不能用d%
	printf("f1 = %lf.\n", f1);
	
	f1 = 3.141592657812345678;		// float精度不够，所以给我按照精度取舍了
	printf("f1 = %5.20f.\n", f1);



	return 0;
}

















