/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ���ṹ�����-ѡ��ṹʾ������
 * ���ܣ�����1+2+3+��������+10
 */
#include <stdio.h>


// 
int main(void)
{
	int i;			// ������֮��i��ֵ�Ƕ��٣�
	int sum;

	printf("i = %d.\n", i);
	
	//for ();		// error: expected expression before ��)�� token
	//for (;;);		// ���ԣ���ѭ��
	
	for (i=0,sum=0; i<10; i++)
	{
		sum += i;
	}
	printf("sum = %d.\n", sum);

	return 0;
}






