#include <stdio.h>
#include <string.h>

int main()
{
	const char str[] = "helloworld";
	const char ch = 'o';
	char strs[]="HelloWorld";
	const char strss[]="hellokitty";
	char *r;
	r = (char *)memchr(str, ch, strlen(str));//memchr函数，在str指向字符串中的strlen(str)个字节中寻找ch所指向的字符串的字符，并返回出现第一次的地址
	int a = strlen(str);//strlen函数,计算指向字符串中不包括\0的字符个数
	//strcpy(strs,strss);
	strncpy(strs,strss,5);
	printf("%d\n", a);
	printf("%c之后是%s\n", ch, r);
	printf("%s",strs);
	return (0);
}