/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ��C�����ַ��������ʾ
 */
#include <stdio.h>


int main(int argc, char **argv)
{
	int i = 0;
	
	char a[] = {97, 98, 99, 100, 101};		// 5
	char b[] = "abcde";						// 6
	
	printf("sizeof(a) = %d, sizeof(b) = %d.\n", sizeof(a), sizeof(b));

/*	
	//char a[5];			// ����һ������5���ַ����ַ�����
	//char a[5] = {'a', 'b', 'c', 'd', 'e'};		// ���岢��ʼ��һ���ַ�����
	//char a[5] = {97, 98, 99, 100, 101};			// ������Ч��һ��
	//char a[] = {97, 98, 99, 100, 101};				// ������Ч��һ��
	//char a[];				// ������Ϊ�������޷����۳�����ĳ���
	//char a[] = "abcde";			// �ַ�����ʽ����ʼ���ַ�����
	
	
	for (i=0; i<5; i++)
	{
		printf("a[%d] = %d		%c.\n", i , a[i], a[i]);
	}
*/

	
	return 0;
}
















