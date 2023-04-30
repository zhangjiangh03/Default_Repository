#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main() {
	int oldprices = 0;
	int prices = 0;
	int i = 0;
	printf("input real prices! :\n");
	scanf("%d", &oldprices);
	system("cls");
	while (oldprices != prices) 
	{
		i++;
		printf("input prices : \n");
		scanf("%d", &prices);
		printf("sector : ");
		if (oldprices > prices) 
		{
			printf("low\n");
		}
		else if (oldprices < prices) 
		{
			printf("hight\n");
		}
		else 
		{
			printf("right\n");
		}
	}
	printf("right count %d\n", i);
	return 0;

}