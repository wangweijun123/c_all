/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ���ṹ�����-ѡ��ṹʾ������
 * ��Ŀ������90�ּ�����Ϊ�ţ�80�ּ�����Ϊ����60�ּ�����Ϊ��������Ϊ������Ȼ������һ��ѧ��������Ȼ��printf��ӡ��you�� "liang"  "jige"	"bujige"
 */
#include <stdio.h>

int main(void)
{
	int grade;
	
	grade = 97;
	
	if (grade >= 90)		
	{
		printf("you.\n");
	}
	else if (grade >= 80)	// ((grade >= 80) && (grade < 90))
	{
		printf("liang.\n");
	}
	else if (grade >= 60)	
	{
		printf("ji ge.\n");
	}
	else
	{
		printf("bu ji ge.\n");
	}
	
	return 0;
}


// if (100 >= grade >= 90)		// C���Բ�֧�֣�Ӧ��д������һ�е�����
// if ((grade >= 90) && (grade <= 100))
// && �߼���������������ӵ����߶������ʱ�����Ľ�������档ֻҪ����
//��һ��Ϊ�٣����յĽ����Ϊ�١�



















