/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：结构体和共用体的使用
 * 目的：理解结构体和共用体的区别
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
	union student s[30];		// 数组，定义了一个班的30个学生
	s[0].m.basketball = 47;
	
	s[1].f.aerobics = 44;
}










