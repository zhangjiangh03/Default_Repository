#include <stdio.h>
void trans(int (*arr)[10]) //传参数组指针
{
	int temp = 0;
	int m = 0;
	int n = 0;
	for (m = 0; m < 10; m++)
		for (n = 0; n <= m; n++)
		{
			//        	temp = arr[m][n];
			//			arr[m][n]=arr[n][m];
			//			arr[n][m] = temp;
			temp = *(*(arr + m) + n);
			*(*(arr + m) + n) = *(*(arr + n) + m);
			*(*(arr + n) + m) = temp;
		}
}
int main()
{
	int arr[10][10] = {
		{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
		{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
		{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
		{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
		{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
		{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
		{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
		{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
		{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
		{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};
	int i = 0, j = 0;

	printf("列阵前如下");
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("列阵后如下");
	printf("\n");
	trans(arr);
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}