#include <stdio.h>
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int a = 0, b = 0;
	int *pa = &a;
	int *pb = &b;
	printf("请输入需要交换的两个数字\n");
	scanf("%d %d", pa, pb);
	printf("a=%d,b=%d\n", *pa, *pb);
	swap(pa, pb);
	printf("a=%d,b=%d", *pa, *pb);
	return 0;
}