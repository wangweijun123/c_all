/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ���ṹ�����-ѭ���ṹʾ������ do whileѭ����ʾ
 * ��Ŀ������100�������������ĺ�
 */
#include <stdio.h>


int main(void)
{
	int i, sum;
	
	i = 1;
	sum = 0;
	
	do
	{
		printf("i = %d.\n", i);
		sum += i;
		i += 2;
	}while (i < 100);				// ��Ҫdo whileѭ�������и��ֺ�
	
	printf("sum = %d.\n", sum);
	
	return 0;
}














