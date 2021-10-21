/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ��C������static��̬�ľֲ������ͷǾ�̬�ľֲ�����������
 */
#include <stdio.h>


void func1(void);
void func_static(void);
void func_static2(void);
void func_global(void);
void func_register(void);

int g_a = 1;


int main(void)
{
	//a = 4;			// ���뱨��δ����
	g_a = 5;			// ���ԣ���Ϊg_a��ȫ�ֱ��������Ե�����������

	func1();		// i = 2
	func1();		// i = 2
	func1();		// i = 2
	
	func_static();	// a = 2
	func_static();	// a = 3
	func_static();	// a = 4
	
	func_static2();	// a = 4;
	func_static2();	// a = 7;
	func_static2();	// a = 10;
	
	func_global();	// g_a = 4;
	func_global();	// g_a = 7;
	func_global();	// g_a = 10;
	
	func_register();
	func_register();
	func_register();
	
	
	
	
// ��Ϊi�Ƕ����ں���func�еľֲ�����������i��������Ϊ���������������iֻ��func1
// �����ڲ���Ч����func1�����ǲ��ܷ���i�ġ���������i���޶��塣
	//i = 5;		// error: ��i�� undeclared (first use in this function)
	
	return 0;
}


void func1(void)
{
	int i = 1;				// ��ͨ�ľֲ�������auto����ʡ�Ե�
	//auto int i = 0;			// �Զ��ֲ���������ʵ������ͨ�ֲ�����
	
	i++;
	
	printf("i = %d.\n", i);
}

void func_static(void)
{
	static int a = 1;		// ��̬�ľֲ�����
	
	a++;
	
	printf("a = %d.\n", a);
}

void func_static2(void)
{
	static int a = 1;		// ��̬�ľֲ�����
	
	a += 3;
	
	printf("a = %d.\n", a);
}

void func_global(void)
{
	g_a += 3;
	
	printf("g_a = %d.\n", g_a);
}

void func_register(void)
{
	register int a = 1;		// ��̬�ľֲ�����
	
	a += 3;
	
	printf("a = %d.\n", a);
}
















