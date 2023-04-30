/*
* Copyright (c) 2023,JiangH
* All rights reserved.
*
* 文件名称：main.c
* 备注：暂时没有达成预想效果
*
* 当前版本：1.0
* 作者：张江湖
*/
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef enum
{
	true = 1, false = 0
}bool;

extern int Factorial(int x);
extern int Factorial_Sum(int x);
extern int Dichotomy(int x, int y);

int main()
{
	int b = 0;
	printf("please input number : \n");
	scanf("%d", &b);
	printf("%d %d\n", Factorial(b), Factorial_Sum(b));

	int c = 0, d = 0, judge = 0;
	printf("please input right number : \n");
	scanf("%d", &c); 
	bool flag = true;
	
	
	//system("cls");
	printf("please input number : \n");
	scanf("%d", &d);
	judge = Dichotomy(c, d);
	printf("%d\n", judge);
	
	
	
	
	
	/*
	do 
	{
		system("cls");
		printf("please input number : \n");
		scanf("%d", &d);
		judge = Dichotomy(c, d);
		printf("%d\n",judge);
	} while (judge == flag);
	if (judge == flag)
	{
		printf("righr\n");
	}
	*/
	return 0;
}