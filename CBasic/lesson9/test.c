/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ��C����ָ��ļ���ʾ
 * Ŀ�ģ���ʾָ��Ķ��帳ֵ����ʼ��
 */
#include <stdio.h>


int main(void)
{
	int a = 1111;
	
	int *p1;			// û��
	int* p2;			// ����
	int * p3;			// ���ԣ���������д��Ч��һ��
	
	p3 = &a;
	*p3 = 321;
	printf("a = %d.\n", a);


/*
	float a = 23;
	
	int *p = &a;			// �������Ͳ�ƥ��
				// warning: initialization from incompatible pointer type
*/



	
	return 0;
}