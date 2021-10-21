/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：结构化设计-选择结构示例代码
 * 题目：规则：90分及以上为优，80分及以上为良，60分及以上为及格，以下为不及格，然后输入一个学生分数，然后printf打印“you” "liang"  "jige"	"bujige"
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


// if (100 >= grade >= 90)		// C语言不支持，应该写成下面一行的样子
// if ((grade >= 90) && (grade <= 100))
// && 逻辑与运算符，它连接的两边都是真的时候，最后的结果才是真。只要两边
//有一边为假，最终的结果就为假。



















