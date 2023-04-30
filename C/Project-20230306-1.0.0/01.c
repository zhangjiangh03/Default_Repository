#define _CRT_SECURE_NO_WARNINGS 1
/********************************
*								*
*         2023 03 06			*
*								*
*********************************/
//#include<stdio.h>
//int main() {
//	printf("(are you ok??)  %c\n",'\'');
//	printf("%c\n", '\130');//8进制的130转化成十进制以对应ASCII码输出，X - 88
//	printf("%d\n", '\130');//8进制130转化成十进制输出
//	printf("%c\n", '\x30');//十六进制转化成十进制对应ASCII码输出，0 - 48
//	printf("%d\n", '\x30');//十六进制130转化成十进制输出
//	/*转义字符*/
//	printf("%d\n", strlen("c:\test\328\test.c"));//14
//	/***************************************/
//	int a;
//	scanf("%d", &a);
//	if (a == 30)
//	{
//		printf("hello 1");
//	}
//	else
//	{
//		printf("hello 2");
//	}
//	return 0;
//}

/************************************************
*												*
*				  2023 03 06					*
*				  max number					*
************************************************/
#include<stdio.h>
int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}
int main(void) {
	int a, b, c;
	printf("please input number : ");
	scanf("%d %d", &a, &b);
	c = max(a, b);
	printf("max number is : %d", c);
	return 0;
}