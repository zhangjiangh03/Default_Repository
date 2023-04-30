#include <stdio.h>
int main()
{
	char ch;//定义字符型变量ch
	char *p_ch;//定义一个指向 字符变量 的 指针变量 p_ch
	int i;//定义一个整型变量i
	int *p_int;//定义一个指向 整型变量 的 指针变量 p_int
	p_ch=&ch;//将 变量ch 的地址 赋给 指针变量p_ch
	p_int=&i;//将 变量i 的地址 赋给 指针变量p_int
	*p_ch='a';//将'a'存储在p_ch所指向的地址中 也就ch的地址 相当于ch='a'
	*p_int=1;//将1存储在p_int所指向的地址中 也就i的地址 相当于i=1
	return 0;
}