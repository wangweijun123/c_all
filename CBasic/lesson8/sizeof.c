/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ��C����sizeof���������ʾ
 */
#include <stdio.h>


int main(void)
{
	int len;
	
	// sizeof��������������ڴ�ռ��
	int a[5];
	len = sizeof(a);					// 4*5 = 20
	len = sizeof(a)/sizeof(a[0]);		// 4*5/4=5

/*
	// sizeof��������ռ���ڴ�
	//len = sizeof(int);				// 4 ��λ���ֽ�
	//len = sizeof(float);				// 4 ��λ���ֽ�
	len = sizeof(double);				// 8 ��λ���ֽ�
	len = sizeof(char);					// 1 ��λ���ֽ�
	
	// sizeof���Ա���ռ���ڴ�
	double d;
	len = sizeof(d);					// 8 ��λ���ֽ�
*/	
	
	printf("len = %d.\n", len);
}










