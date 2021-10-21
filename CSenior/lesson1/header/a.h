/*
 * 公司：深圳市联嵌科技有限公司 www.link-embed.com
 * 作者：朱有鹏
 * 项目：C语言中头文件使用的demo
 */
#ifndef __A_H__
#define __A_H__

int add(int a, int b);
int sub(int a, int b);

int g_a = 1;		// 不要在头文件中定义变量，这样不好


#endif