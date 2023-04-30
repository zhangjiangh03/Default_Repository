#include <stdio.h>
int main()
{
	int a[10] = {0};
	int i, j, sort;

	printf("请输入十个数:\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);

	printf("从大到小排序前数据如下:\n");
	for (i = 0; i < 10; i++)
		printf("%4d", a[i]);
	for (i = 0; i < 10; i++)
		for (j = 0; j < 9 - i; j++)
			if (a[j] < a[j + 1])
			{
				sort = a[j];
				a[j] = a[j + 1];
				a[j + 1] = sort;
			}

	printf("\n从大到小排序后数据如下:\n");
	for (i = 0; i < 10; i++)
		printf("%4d", a[i]);

	return 0;
}