#include <stdio.h>
void help(void)
{
	printf("帮助信息");
}
int max(int x, int y)
{
	int z;
	if (x > y)
	{
		z = x;
	}
	else if (x == y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}

int min(int x, int y)
{
	int z;
	if (x < y)
	{
		z = x;
	}
	else if (x == y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}

int main()
{
	help();
	int numMax,numMin;
	int a, b;
	printf("请输入\n");
	scanf("%d %d", &a, &b);
	numMax = max(a, b);
	printf("最大值为%d\n", numMax);
	numMin = min(a, b);
	printf("最小值为%d\n", numMin);
	return 0;
}