#include <stdio.h>


int main(void)
{
/*
	int a = 120;
	int b = 20;
	
	printf("sum = %d\n", add(a, b));
	printf("sub = %d\n", sub(a, b));
*/
	int a = 120;
	int b = 20;
	int sum = 0;
	int sub = 0;
	
	func(&sum, &sub, a, b);
	printf("sum = %d\n", sum);
	printf("sub = %d\n", sub);

	
	return 0;
}

// һ��linux�����У�����ֵ������ʾ����ִ�гɹ�����ʧ��
// һ�㶼�Ƿ���0��ʾִ�гɹ�������-1��ʾִ��ʧ��
int func(int *sum, int *sub, int a, int b)
{
	*sum = a + b;
	*sub = a - b;
	
	return 0;
}



int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}















