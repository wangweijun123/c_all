/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ��C�����л����������͵ı����ڴ�ռ��
 * Ŀ�ģ���Ϥsizeof�������ʹ��
 */
#include <stdio.h>




int main(void)
{
	int len;
	
	len = sizeof(char);
	printf("sizeof(char) 	= %d.\n", sizeof(char));
	
	len = sizeof(short);
	printf("sizeof(short) 	= %d.\n", sizeof(short));
	
	len = sizeof(int);
	printf("sizeof(int) 	= %d.\n", sizeof(int));
	
	len = sizeof(long);
	printf("sizeof(long) 	= %d.\n", sizeof(long));
	
	len = sizeof(float);
	printf("sizeof(float) 	= %d.\n", sizeof(float));
	
	len = sizeof(double);
	printf("sizeof(double) 	= %d.\n", sizeof(double));
	
	return 0;
}

















