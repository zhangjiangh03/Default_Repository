#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *p = NULL;
	int *g = NULL;
	int i = 0;
	int j = 0;
	int a = 0;
	int b = 0;
	int m = 0;
	printf("请输入要申请内存的的元素个数");
	scanf("%d", &j);
	p = (int *)malloc(j * 4); //j*4个字节空间
	printf("请输入要申请内存的int类型内存的块数");
	scanf("%d", &a);
	b = sizeof(int);
	g = (int *)calloc(a, b);
	if (p == NULL || g == NULL)
	{
		printf("申请失败！");
		return 0;
	}
	for (i = 0; i < j; i++)
	{
		printf("p[%d]=%d\n", i, p[i]);
	}
	free(p); //申请后释放，已经不可使用
	p = NULL;
	printf("\n");
	for (m = 0; m < a; m++)
	{
		printf("g(%d)=%d\n", m, *(g + m));
	}
	free(g); //申请后释放，已经不可使用
	g = NULL;
	return 0;
}