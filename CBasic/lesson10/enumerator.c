/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ��C����ö�ٵ�ʹ����ʾ
 * Ŀ�ģ����궨���ö�٣��Ա��䲻ͬ
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


// ����һ��ö�����ͣ����ֽ�enum week
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
	enum week today;		// ʹ��enum week���ͣ�������һ��ö�ٱ���today
	
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







