#define _CRT_SECURE_NO_WARNINGS 1
/*************************************************
*												 *
*					20230307					 *
*												 *
**************************************************/
#include<stdio.h>
extern int sum(int x,int y);
int main() {
	/*int line = 0;
	while (line < 300)
	{
		printf("hello,%d\n",line);
		line++;
	}
	if (line == 300)
	{
		printf("so hello\n");
	}*/

	/*int num1 = 0, num2 = 0;
	printf("please input nunmber : \n");
	scanf("%d %d", &num1, &num2);
	printf("sum is : %d\n", sum(num1, num2));*/

	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	scanf("%d %d", &arr[3], &arr[4]);
	int i = 0;
	while (i < 10) {
		printf("arr[%d]=%d\n", i, arr[i]);
		i++;
	}
	printf("printf finish ! \n");*/

	int a = 36;
	printf("%dH\n", a);
	printf("%4dH\n", a);//右对齐，占4个字符的空间
	printf("%-4dH\n", a);//左对齐，占4个字符的空间
	printf("%4.3dH\n", a);//右对齐，占4个字符的空间，至少占3位数字
	printf("%-4.3dH\n", a);//左对齐，占4个字符的空间，至少占3位数字
	printf("%.3dH\n", a);//右对齐，至少占3位数字

	printf("\n");

	float b = 3.14159;
	printf("%f\nH", b);
	printf("%9f\nH", b);//右对齐，占9个字符的空间
	printf("%-9f\nH", b);//左对齐，占9个字符的空间
	printf("%9.4f\nH", b);//右对齐，占9个字符的空间，保留小数点后4位数字
	printf("%-9.4fH\n", b);//左对齐，占9个字符的空间，保留小数点后4位数字
	printf("%.4fH\n", b);//右对齐，至少占4位数字

	return 0;
}