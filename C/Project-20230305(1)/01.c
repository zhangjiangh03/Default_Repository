#define _CRT_SECURE_NO_WARNINGS 1
//报错处理
/********************************************************
*                                                       *
*              2023年03月04日                           *
*                                                       *
*********************************************************/

int b = 30;//全局变量
#include<stdio.h>
int main(){
	printf("hello\n");
	printf("\n");

	/***************************************************/

	//sizeof() 计算类型变量的空间大小，单位是字节Byte，C语言规定 sizeof(long) >= sizeof(int)
	printf("%d (int)\n", sizeof(int));//整型，大小4
	printf("%d (short)\n", sizeof(short));//短整型，大小2
	printf("%d (char)\n", sizeof(char));//字符数据类型，大小1
	printf("%d (long)\n", sizeof(long));//长整型，大小4
	printf("%d (long long)\n", sizeof(long long));//更长整型，大小8
	printf("%d (double)\n", sizeof(double));//双精度浮点型，大小8
	printf("%d (float)\n", sizeof(float));//单精度浮点型，大小4
	printf("\n");

	/***************************************************/

	//变量
	int age = 20;
	double weight = 75.5;
	age = age + 1;
	printf("%d\n", age);
	printf("%lf\n", weight);//%f 对应 float，%lf 对应 double
	printf("\n");

	/***************************************************/

	int a = 20;//局部变量。全局变量与局部变量变量名相同时，局部变量优先
	printf("%d %d\n", a, b);
	printf("\n");

	/***************************************************/

	/********************************************************
	*                                                       *
	*              求和输入scanf                            *
	*                                                       *
	*********************************************************/
	int c,d;
	scanf("%d %d", &c, &d);
	int sum = c + d;
	printf("%d\n", sum);

	return 0;
}