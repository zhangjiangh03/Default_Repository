#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[20] = { 4, 7, 3, 0 };
	int* p = arr;

	printf("p        <==> %p\n", p);
	printf("*p       <==> %p\n", *p);
	printf("arr      <==> %p\n", arr);
	printf("arr[0]   <==> %p\n", arr[0]);
	printf("arr[0]   <==> %d\n", arr[0]);
	printf("\n");
	printf("p+1      <==> %p\n", p+1);
	printf("*p+1     <==> %p\n", *p+1);
	printf("arr+1    <==> %p\n", arr+1);
	printf("arr[0]+1 <==> %p\n", arr[0] + 1);
	printf("arr[0]+1 <==> %d\n", arr[0] + 1);
	printf("\n");
	printf("*(p+1)   <==> %p\n", *(p + 1));
	printf("*(p+1)   <==> %d\n", *(p + 1));
	return 0;
}