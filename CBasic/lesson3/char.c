/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ��C������������-�ַ��� ������ʾ
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	char c1 = 'A';
	
	// printf�У���ӡ�ַ�����ʱ��ʹ��%d����ʮ���Ƶķ�ʽ��ӡ����ӡ�������Ǹ��ַ�
	// ��Ӧ��ASCII��ֵ��ʹ��%c����ӡ�����ӡ�����Ǹ��ַ��ķ��š�
	printf("c1 = %d, c1 = %c.\n", c1, c1);
	
	c1 = c1 + 5;
	printf("c1 = %d, c1 = %c.\n", c1, c1);	// c1 = 70, c1 = F
	
	return 0;
}

