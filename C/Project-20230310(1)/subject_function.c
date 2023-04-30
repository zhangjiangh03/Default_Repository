/*
* Copyright (c) 2023,JiangH
* All rights reserved.
*
* 文件名称：subject_function
* 文件标识：
*
* 当前版本：1.0 
* 作者：张江湖
* 内容：数学函数
*/

#define _CRT_SECURE_NO_WARNINGS 1

/*阶乘函数*/
int Factorial(int x)
{
	int a, fac = 1;
	for (a = 1; a < x + 1; a++)
	{
		fac *= a;
	}
	return fac;
}

/*阶乘求和函数*/
int Factorial_Sum(int x)
{
	int a, fac = 1, sum = 0;
	for (a = 1; a < x + 1; a++)
	{
		fac *= a;
		sum += fac;
	}
	return sum;
}

/*二分法判断函数*/
int Dichotomy(int x, int y)
{
	int under = 0;
	int exceed = 0;
	int right = 1;
	int i = 0;
	system("cls");
	while (x != y)
	{
		i++;
		if (x > y)
		{
			return under;
		}
		else if (x < y)
		{
			return exceed;
		}
		else
		{
			return right;
		}
	}

}