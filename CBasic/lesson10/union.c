/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ��C���Խṹ�嶨�����ʾ
 * Ŀ�ģ������˽�ṹ��Ķ��巽ʽ��������
 */
#include <stdio.h>


// ���干��������
union MyUnion
{
	int a;
	char b;
	float c;
};



int main(void)
{
	union MyUnion u1;		// ʹ���Զ����union�������������
	
	u1.a = 12933;
	
	printf("u1.a = %d, u1.b = %d.\n", u1.a, u1.b);
	
	return 0;
}








