/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ��C���������κ͸��������ڴ��д洢��ʽ�Ĳ�ͬ
 * Ŀ�ģ��˽�洢��ȡʱ�������ͱ�����ͬ����Ҫ��
 */
#include <stdio.h>


void test(void);


int main(void)
{
/*
	test();
*/
	int a =  444;
	void *pVoid;
	
	pVoid = &a;
	
	printf("*pVoid = %d.\n", *(int *)pVoid);			// �Ե�		
	printf("*pVoid = %f.\n", *(float *)pVoid);			// �����
/*
 * ע�⣬void *���͵�ָ�룬����ָ���������͵��������ǳ���Աʹ�õ�ʱ���������ǳ�
 * ��������ʱ��ȡʱ�������ͱ�����ͬ���������ͬ����������û�����ֵģ������Ҫ
 * ����Ա�Լ�����
 */

	
	return 0;
}

// void���Ͳ����ͷ���ֵ����ʾ����Ҫ
void test(void)
{
	printf("I am a void test.\n");
}




