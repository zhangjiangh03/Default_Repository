#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int i, j, k;
	for (j = 1; j <= 4; j++)
	{
		for (k = 1; k <= 4 - j; k++)
			printf(" ");
		for (i = 1; i <= 2 * j - 1; i++)
			printf("$ ");
		printf("\n");
	}
	int a, q, w;
	for (a = 1; a <= 3; a++)
	{
		for (q = 1; q <= a; q++)
			printf(" ");
		for (w = 1; w <= 7 - 2 * a; w++)
			printf("$ ");
		printf("\n");
	}
}
