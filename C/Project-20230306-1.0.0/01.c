#define _CRT_SECURE_NO_WARNINGS 1
/********************************
*								*
*         2023 03 06			*
*								*
*********************************/
//#include<stdio.h>
//int main() {
//	printf("(are you ok??)  %c\n",'\'');
//	printf("%c\n", '\130');//8���Ƶ�130ת����ʮ�����Զ�ӦASCII�������X - 88
//	printf("%d\n", '\130');//8����130ת����ʮ�������
//	printf("%c\n", '\x30');//ʮ������ת����ʮ���ƶ�ӦASCII�������0 - 48
//	printf("%d\n", '\x30');//ʮ������130ת����ʮ�������
//	/*ת���ַ�*/
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