/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ��C������static��̬�ľֲ������ͷǾ�̬�ľֲ�����������
 */
#include <stdio.h>


void func_in_a(void);
extern int g_a;				// ������һ��int����g_a
//extern int g_b;

void func_in_b(void)
{
	printf("I am func in b.c.\n");
}


int main(void)
{
	printf("I am main in a.c.\n");
	printf("I am main in a.c, g_a = %d.\n", g_a);
	printf("I am main in a.c, g_a = %d.\n", g_b);
	
	
	//func_in_b();		// ֱ�ӵ���
	
	func_in_a();		// ��ӵ���
	
	return 0;
}








