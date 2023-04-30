#define _CRT_SECURE_NO_WARNINGS 1
/*******************************************************
*                                                      *
*                  2023年03月05日                      *
*                                                      *
********************************************************/
#include<stdio.h>
#define MAX 300//标识常量
extern int g_val;//声明

enum Sex
{
	MALE = 1,//可以赋初值
	FEMALE = 3,
	SECERT = 5
};

int main() {
	printf("%d", g_val);
	printf("\n");
/******************************************************/
	const int num = 20;//const修饰不可更改，常变量 具有了常属性,本质还是变量
	//int arr[num] = { 0 };//报错，说明num不是常量
	printf("\n");
	/******************************************************/
	/*枚举常量,可以一一列举的常量*/
	enum Sex s = MALE;//定义变量s，数值等于MALE
	printf("%d\n", s);

	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECERT);
	printf("\n");
	/*******************************************************
	*                                                      *
	*  "字符串"          字符串结束标志\0                  *
	*         字符数组                                     *
	********************************************************/
	char arr[] = "hello";
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' ,'\0' };
	//char arr2[] = { 'a','b','c' };//abc后还没有结束，出现乱码
	printf("%s\n", arr1);
	printf("%s\n", arr2);

	int len = strlen(arr2);
	printf("%d\n", len);//3 求长度时\0不算在里面，求元素个数时\0算在里面

	/*
	char arr2[] = { 'a','b','c' };
	int len = strlen(arr2);
	printf("%d\n", len); // 输出随机值
	*/
	return 0;
}