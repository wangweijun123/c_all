/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ��C������ѧ����� ������ʾ
 *  	��Ҫ��ʾ�� + - * / %�ȼ��������
 */
#include <stdio.h>


int main(void)
{
	int a, b, c, d, e;
	
	a = 13;
	b = 4;
	c = 7;
	
	d = a + b / c;			// C�����У��������ȼ���ͬ����ѧ�У������ȳ˳���Ӽ�
	e = (a + b) / c;		// ���������������Ĳ���
	
	printf("d = %d, e = %d.\n", d ,e);

/*
	int a, b, c, d;
	
	a = 17;
	b = 4;
	c = a / b;		// ��
	d = a % b;		// ȡ��
	
	printf("a = %d, b = %d, c = %d, d = %d.\n", a, b, c, d);
	// a = 17, b = 4, c = 4, d = 1.
*/	
	return 0;
}





















