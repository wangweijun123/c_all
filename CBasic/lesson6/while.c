/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ���ṹ�����-ѭ���ṹʾ������ whileѭ����ʾ
 * ��Ŀ������100�������������ĺ�
 */
#include <stdio.h>


int main(void)
{
	int i, sum;
	
	i = 1;
	sum = 0;
	while (i < 100)
	{
		printf("i = %d.\n", i);
		sum += i;
		i += 2;
	}
	
	printf("sum = %d.\n", sum);
	
	return 0;
}














