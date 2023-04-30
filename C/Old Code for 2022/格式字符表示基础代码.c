#include <stdio.h>
int main()
{
	int a;
	a=10;
	signed int d;
	d=-10;
	float b=52.03f;
	double e=52.03;
	char *c="Hello";
	char f='m';
	printf("十进制有符号：%d\n",a);
	printf("十六进制表示：%X\n",a);
	printf("float表示：%5.4f\n",b);
	printf("指数表示：%.4e\n",b);
	printf("字符串表示：%s\n",c);
	printf("指针表示：%p\n",c);
	printf("十进制无符号：%u\n",d);//不是把负号去除，而是最高位1不看做负号
	printf("八进制无符号：%o\n",a);
	printf("double表示：%5.4lf\n",e);
	printf("char表示：%c\n",f);
	return 0;
}