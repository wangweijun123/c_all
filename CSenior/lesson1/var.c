/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ��C������ȫ�ֱ����;ֲ�����
 * Ŀ�ģ�����ʲô��ȫ�ֱ�����ʲô�Ǿֲ�����
 */
#include <stdio.h>

int func(void);

int g_a = 5;			// g_a�����ں������棬�����ȫ�ֱ���

int main(void)
{
	int a;			// a������main�����У������Ǿֲ�����
	
	a = 23;
	printf("a = %d, g_a = %d.\n", a, g_a);
	
	printf("g_a = %d.\n", g_a);
	
	//func();
	
/*
	int i;
	for (i=0; i<10; i++)
	{
		int b = 5;		// b�����������������ֻ��for�����{}���棬�����ǿ�������
		
		b++;
	}
	printf("b = %d.\n", b);
	
*/	
	
	return 0;
}




int func(void)
{
	int i;
	int j;
	int k;
	
	//i = a;		// a��main�����ж���ľֲ�����������������ֻ��main�����еĴ����
				// ��������ﲻ�ܷ���a
	return i;
}









