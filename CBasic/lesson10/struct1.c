/*
 * ��˾����������Ƕ�Ƽ����޹�˾ www.link-embed.com
 * ���ߣ�������
 * ��Ŀ��C���Խṹ�嶨�����ʾ
 * Ŀ�ģ������˽�ṹ��Ķ��巽ʽ��������
 */
#include <stdio.h>


// ע�⣺
// 1���ṹ�����͵Ķ������ں������棬��������
// 2���ṹ�嶨�����һ���µ�������ͣ������Ǳ�����Ҳ�������ڴ档
//    �Ժ��ڶ�������ĵط�����ʹ�øýṹ�����������������
struct Student
{
	char name[20];				// ѧ������
	unsigned int num;			// ѧ��
	int isMale;					// �Ա�
};

struct MyStruct
{
	int a;
	char c;
	float f;
	double d;
};						// ע�������;������

struct ArrayStruct
{
	int a;
	int b;
	int c;
	int d;
};




int main(void)
{
/*
	int a[4];
	ArrayStruct s1;
*/

	//struct MyStruct s = {100, 'd', 12.445, 111.111111111111};	// ok
	//struct MyStruct s = {100; 'd'; 12.445; 111.111111111111};	// ����
	
	
/*	
	// ���ֲ���ok������Σ�յģ�ǧ���á�

	struct MyStruct s = 
		{
			s.a = 1444, 					// ֻ�ܴ�ǰ�������γ�ʼ������ҪֻҪ��
			s.c = 'k', 						// һ��������ľ�������
			s.f = 3.13,
			//s.d = 32.222222,
		};										// ����ok
*/	
/*	
	struct MyStruct s = 
		{
			s.a = 1444; 					
			s.c = 'k'; 						
			s.f = 3.13;
			s.d = 32.222222;
		};										// ���У���ʼ��ʽ�зֺŲ�����
*/
/*
	struct MyStruct s = 
		{
			//.a = 1444, 					
			.c = 'k', 						
			.f = 3.13,
			.d = 32.222222,
		};									// ok
*/
/*
	struct MyStruct s = 
		{
			a = 1444, 					
			c = 'k', 						
			f = 3.13,
			d = 32.222222,
		};									// ����.�ǲ���ʡ�Ե�
*/
/*
	struct MyStruct s = 
		{
			. = 1444, 					
			. = 'k', 						
			. = 3.13,
			. = 32.222222,
		};			
*/								// ���У�.�����Ԫ��������ʡ�ԡ�


	

	printf("s.c = %c, s.d = %f.\n", s.c, s.d);
/*
	struct MyStruct s;			// �ȶ������������ͬʱ�޳�ʼ��
	
	s.a = 1444;					// ����֮���ٸ�ֵ
	s.c = 'k';
	s.f = 3.1415;
	s.d = 3.423246;
	
	s.a += 100;	
	printf("s.a = %d.\n", s.a);
	
	//s.c = 'y';
	printf("s.c = %c.\n", s.c);
*/

/*
	struct Student s1;			// s1��һ��������������struct Student
	
	// ���ṹ�������ֵ
	s1.name[0] = 'J';
	s1.name[1] = 'i';
	s1.name[2] = 'm';
	s1.name[3] = '\0';
	
	s1.num = 123;
	s1.isMale = 1;
	
	// ��ӡ���鿴�Բ���
	printf("s1.name = %s, s1.num = %d, s1.isMale = %d.\n", 
			s1.name, s1.num, s1.isMale);
*/


	
	return 0;
}





