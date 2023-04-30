#include <stdio.h>
int main()
{
	int a;
	for (a = 0; a <= 10; a++)
	{
		if (a == 5) //if语句若不加括号，默认表达式只有下一句一句
			break;	//a=5时跳出循环
		printf("%d\n", a);
	}
	printf("…………………………\n");
	for (a = 0; a <= 10; a++)
	{
		if (a == 5)	  //if语句若不加括号，默认表达式只有下一句一句
			continue; //a=5时结束本次循环，进入下一次#
		printf("%d\n", a);
	}
	printf("…………………………\n");
	int b = 0;
	for (a = 0; a <= 100; a++)
	{
		b = b + a;
	}
	printf("1+2+3+…100=%d\n", b);
	printf("…………………………\n");
	//while循环，先判断后执行，条件不满足也不执行
	int i = 1, j = 0;
	while (i <= 100) //求1+2+…100
	{
		j = j + i;
		i++;
	}
	printf("1+2+3+…100=%d\n", j);
	printf("…………………………\n");
	//do…while循环，先执行后判断，至少执行一次循环体
	int m, n;
	m = 0;
	n = 0;
	do
	{
		m = m + n;
		n++;
	} while (n <= 100);
	printf("1+2+3+…100=%d\n", m);
	printf("…………………………\n");
	printf("1\n");
	goto TO;
	printf("2\n");
	printf("3\n");
	printf("4\n");
TO:
	printf("5\n");
	printf("6\n");
	printf("7\n");
	printf("8\n");

	return 0;
}