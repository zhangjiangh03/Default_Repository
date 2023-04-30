#include <stdio.h>
int main()
{
	//if语句
	int a, b;
	printf("请输入a b\n");
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		printf("%d<%d\n", a, b);
		printf("既是a<b\n");
	}
	else if (a == b)
	{
		printf("%d=%d\n", a, b);
		printf("既是a=b\n");
	}
	else
	{
		printf("%d>%d\n", a, b);
		printf("既是a>b\n");
	}

	//switch语句
	switch (a)
	{
	case 5:
		printf("5");
		break;
	case 10:
		printf("10");
		break;
	default:
		printf("other cases…");
	}
	return 0;
}