/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ��C����ָ��ļ���ʾ
 * Ŀ�ģ��ô��ֱ�۵����ָ�������ʹ��Ч��
 */
#include <stdio.h>


int main(void)
{
	int a = 23;
	int b = 0;
	int *p;					// ������һ��int�͵�ָ�����p	
	
	p = &a;					// �൱��p = (&a); p�д���Ǳ���a�ĵ�ַ
	
	//*p = 111;				// �൱��a = 111; 
	b = *p;				
	
	printf("a = %d.\n", a);
	printf("b = %d.\n", b);
	printf("p = %p.\n", p);	// %p���ڴ�ӡָ�������ֵ
	
	return 0;
}












