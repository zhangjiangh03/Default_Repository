/*
* Copyright (c) 2023,JiangH
* All rights reserved.
*
* �ļ����ƣ�subject_function
* �ļ���ʶ��
*
* ��ǰ�汾��1.0 
* ���ߣ��Ž���
* ���ݣ���ѧ����
*/

#define _CRT_SECURE_NO_WARNINGS 1

/*�׳˺���*/
int Factorial(int x)
{
	int a, fac = 1;
	for (a = 1; a < x + 1; a++)
	{
		fac *= a;
	}
	return fac;
}

/*�׳���ͺ���*/
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

/*���ַ��жϺ���*/
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