/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ��C�����ж��ļ���Ŀ
 */
#include <stdio.h>



void func_in_b(void);

int g_a = 12;
int g_b = 111;






void func_in_a(void)
{
	
	g_a = 24;
	
	printf("I am in func_in_a of a.c, g_a = %d.\n", g_a);
	func_in_b();
}

/*
// �������
// C�����У����庯�������������棬������һ���������涨���ĺ���
// ����û�оֲ�������ֻ��ȫ�ֺ�����

void func1(void)
{
	int a;
	
	
	void func2()
	{
		int b;
	}
}

*/









