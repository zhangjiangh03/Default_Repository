#include <stdio.h>
int main()
{
	int a;
	a = 2 * 3, a * 5; //逗号运算符
	printf("%d\n", a);

	int b;
	b = (6 < 5) ? 5 : 6; //条件运算符，6<5为假，所以输出6
	printf("%d\n", b);

	int c = 3;
	c++; //先用后加
	printf("%d\n", c);

	int d = 3;
	++d; //先加后用
	printf("%d\n", d);

	int f = 8;
	int num1;
	num1 = (f++) + (f++) + (f++);
	printf("%d %d\n", num1, f);
	//f++先用后加，num1=f+f+f+3=27，f=f+3=11

	int g = 8;
	int num2;
	num2 = (++g) + (++g) + (++g);
	printf("%d %d\n", num2, g);
	//++g先加后用，num2=11+11+11=33或num2=9+10+11=30，g=3+g=11
	return 0;
}