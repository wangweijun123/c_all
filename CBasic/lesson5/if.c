/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ���ṹ�����-ѡ��ṹʾ������
 */
#include <stdio.h>


int main(void)
{
	int a, b, max;		
	
	a = 33333;
	b = 333;
	if (a > b)			// �жϱ�ʾʽ
	{
		max = a;	
		printf("true\n");		// ���Է������ڲ�ͬ��֧������Ҫ���Զ���ӡһЩ����
	}							// Ȼ�����к���ݴ�ӡ���ݣ������������ʵ������
	else if (a == b)			// ������������Դ��������Է�����
	{
		max = a;
		printf("a == b\n");
	}
	else
	{
		max = b;
		printf("false\n");
	}
	printf("max = %d.\n", max);
	
	return 0;
}









