/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ���ṹ�����-ѡ��ṹʾ������
 * ��Ŀ����һ��10����10*9*8*7*��������1��
 */
 
 
#include <stdio.h>


int main(void)
{
	int i, val;
	
	/*
	for (i=1,val=1; i<=10; i++)
	{
		val *= i;
		printf("i = %d.\n", i);		// ʹ��printf���е���
	}
	*/
	/*
	for (i=1,val=1; i<11; i++)
	{
		val *= i;					// ����д�����ձ�
		// val = val * i;			// ����д��Ҳ���ԣ�����һ��������ֲ�����
		printf("i = %d.\n", i);		// ʹ��printf���е���
	}
	*/
	
	for (i=10,val=1; i>=1; i--)
	{
		val *= i;
		printf("i = %d.\n", i);		// ʹ��printf���е���
	}
	
	
	printf("val = %d.\n", val);
	
	return 0;
}