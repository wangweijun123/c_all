/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言枚举的使用演示
 * 目的：理解宏定义和枚举，对比其不同
 */
#include <stdio.h>

/*
#define SUN	0
#define MON 1
#define TUE	2
#define WEN	3
#define THR	4
#define FRI	5
#define SAT	6

#define N 10
*/


// 定义一个枚举类型，名字叫enum week
enum week
{
	SUN,		// SUN = 0
	MON,		// MON = 1;
	TUE,
	WEN,
	THR,
	FRI,
	SAT,
};




int main(void)
{
	enum week today;		// 使用enum week类型，来定义一个枚举变量today
	
	today = SAT;
	
	switch (today)
	{
		case MON:
			printf("hao kun a.\n");
			break;
		case TUE:
			printf("2\n");
			break;
		case WEN:
			printf("3.\n");
			break;
		case THR:
			printf("4\n");
			break;
		case FRI:
			printf("5.\n");
			break;
		case SAT:
			printf("6\n");
			break;
		case SUN:
			printf("ha ha.\n");
			break;
		default:
			printf("bu ke neng.\n");
			break;
	}


/*
	int day;
	
	day = N;
	
	switch (day)
	{
		case MON:
			printf("hao kun a.\n");
			break;
		case TUE:
			printf("2\n");
			break;
		case WEN:
			printf("3.\n");
			break;
		case THR:
			printf("4\n");
			break;
		case FRI:
			printf("5.\n");
			break;
		case SAT:
			printf("6\n");
			break;
		case SUN:
			printf("ha ha.\n");
			break;
		default:
			printf("bu ke neng.\n");
			break;
	}
*/

	
	return 0;
}







