/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ���ṹ�����-ѡ��ṹʾ������
 * ���ܣ���������������ӡ�����������Ǹ���
 */
#include <stdio.h>

// ʹ����ѡ��ṹ��Ƕ��
int main(int argc, char **argv)
{
	int a, b, c, max;
	
	a = 12;
	b = 45;
	c = 23;
	
	if (a > b)
	{
		// a��b�У�a�ϴ�
		if (a > c)
		{
			max = a;
		}
		else
		{
			max = c;
		}
	}
	else
	{
		// a��b�ȣ�b�ϴ�
		if (b > c)
		{
			max = b;
		}
		else
		{
			max = c;
		}
	}
	
	printf("max = %d.\n", max);
	
	return 0;
}

















