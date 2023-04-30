#define _CRT_SECURE_NO_WARNINGS 1
/****************************************
*										*
*				20230308                *
*										*
*****************************************/

typedef unsigned int u_int;//类型重定义

//extern int g_val;

void test() {
	static int a = 1;
	// int a = 1;
	a++;
	printf("%d\n", a);
}

extern Add(int x, int y);

#include<stdio.h>
int main() {

	/*int a = 9 / 2;
	printf("%d\n", a);
	float b = 9 / 2;
	float c = 9 % 2;
	printf("%f\n", c);*/

	//int a = 2;
	//int b = a << 1;//左移操作符，移动二进制
	//printf("%d\n", b);
	////位操作符  &  | ^
	////a = a / 3;  等同  a /= 3;

	////非零 真    零  假
	//int a = 1;
	//printf("%d\n", !a);
	//if (a)
	//{
	//	printf("hello");//假做
	//}
	//if (!a) {
	//	printf("no hello");//真做
	//}

	//int arr[10] = {0};
	//printf("%d\n", sizeof(arr));//计算数组大小 单位字节byte   int占4个字节  所以是 4*10=40个字节

	//整数在内存中存储是 补码
	//一个整数的二进制表示有三种 原码 反码 补码 
	/*
	* -1
	* 100000000 00000000 00000000 00000001   负数原码
	* 符号位不变 其余位取反是反码
	*  11111111 11111111 11111111 11111110    负数反码
	* 反码加1是补码
	*  11111111 11111111 11111111 11111111    负数补码
	* 
	* 正数原码 反码 补码均相同
	* 
	* 
	*   ~ 取反
	*   100000000 00000000 00000000 00000001
	*   01111111  11111111 11111111 11111110
	*/

	//int a = 10;
	//int b = (++a) + (++a) + (++a);
	//int c = 10;
	//int d = (c++) + (c++) + (c++);
	///*
	//不同平台可能有不同的结果 ( 谁会这样写程序？ ) 
	//
	//(++a) + (++a) + (++a)
	//第一个 ++a     a = 10 + 1 = 11
	//第二个 ++a     a = 11 + 1 = 12
	//第三个 ++a     a = 12 + 1 = 13
	//此时 a = 13
	//三个括号加起来 13 + 13 + 13 = 39
	//---------------------------------
	//(c++) + (c++) + (c++)
	//三个括号加起来 10 + 10 + 10 = 30
	//第一个 c++     c = 10 + 1 = 11
	//第二个 c++     c = 11 + 1 = 12
	//第三个 c++     c = 12 + 1 = 13
	//*/
	//printf("%d\n", a);
	//printf("%d\n", b);
	//printf("%d\n", c);
	//printf("%d\n", d);

	//int b = ++a;//前置++  先++  后使用
	//强制转换 (数据转换)内容   eg:  int a = (int)3.14159;
	//int c = 10;
	//int d = c++;//后置++ 先使用 后++
	//printf("%d\n", d);
	//printf("%d\n", c);

	/*int a = 3;
	int b = 0;
	if (a || b) {
		printf("hello");
	}
	int a = 3;
	int b = 5;
	if (a && b) {
		printf("hello");
	}*/

	/*
	* a?b:c
	* a成立 b的结果
	* a不成立 c的结果
	*/
	/*int a = 0;
	int b = 3;
	int max = 0;
	max = a > b ? a : b;
	printf("%d\n", max);*/

	/*
	* 逗号表达式
	* (2, 4 + 5, 6);
	*/
	//int a = 0;
	//int b = 3;
	//int c = 5;
	//int d = (a = b + 2, c = a - 4, b = c + 2);
	//// a = 3 + 2 = 5    c = 5 - 4 = 1   b = 1 + 2 = 3
	//printf("%d\n", d);
	////从左向右计算，整个表达式的结果是最后一个表达式的结果
	
	//register int num = 30;
	//signed 有符号   unsigned 无符号
	//static 静态
	//void 空
	
	/*unsigned int num = 100;
	u_int num = 100;*/

	//static 
	//修饰全局变量 
	//修饰局部变量(改变生命周期 改变变量数据类型) 
	//修饰函数
	// 
	// 栈区 局部变量 函数的参数
	// 堆区 动态内存分配
	// 静态区 全局变量 static修饰的静态变量

	/*int i = 0;
	while (i < 10) {
		test();
		i++;
	}*/
	/*printf("%d\n", g_val);*/
int a = 30;
int b = 20;
printf("%d\n", Add(a, b));
	return 0;
}