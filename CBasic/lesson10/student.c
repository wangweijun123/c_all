/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ���ṹ��͹������ʹ��
 * Ŀ�ģ����ṹ��͹����������
 */
#include <stdio.h>

struct Male
{
	int age;
	char name[20];
	int basketball;
};

struct Female
{
	int age;
	char name[20];
	int aerobics;
};

union student
{
	struct Male m;
	struct Female f;
};


int main(void)
{
	union student s[30];		// ���飬������һ�����30��ѧ��
	s[0].m.basketball = 47;
	
	s[1].f.aerobics = 44;
}










