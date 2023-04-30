#include <stdio.h>
int main()
{
	char ch;		  //定义一个字符型变量ch
	char *p_ch = &ch; //定义一个指向字符型变量的指针变量p_ch，并且初始化为ch的地址
	printf("%p\n", p_ch);

	//	int a = 100;	 //定义整型变量a，初始化100
	int ba;	 //定义整型变量a，初始化100
	int *p;	 //定义一个指向整型变量的指针变量p
	p = &ba; //将a的地址赋给指针变量p
	*p = 90;
	//90赋给指针变量p所指向的地址，也就是ba，既是ba=90
	printf("%p %d\n", p, *p); //打印p，也就是ba的地址

	int a, b, min;
	int *p_a, *p_b, *p_min;
	p_a = &a;	  //初始化
	p_b = &b;	  //初始化
	p_min = &min; //初始化
	printf("请输入对比数\n");
	scanf("%d %d", p_a, p_b); //输入，存入a和b
	if (*p_a > *p_b)
	{
		*p_min = *p_b;
		printf("%p min=%d\n", p_min, *p_min);
	}
	else if (*p_a == *p_b)
	{
		*p_min = *p_a;
		printf("%p min=%d", p_min, *p_min);
	}
	else if (*p_a < *p_b)
	{
		*p_min = *p_a;
		printf("%p min=%d", p_min, *p_min);
	}

	printf("\n…………………………\n");
	int las[5];
	int *p_las, *p_las1, *p_las2;
	p_las = las;
	*(p_las + 2) = 898; //相当于las[2]=898
	printf("%d\n", las[2]);
	p_las1 = &las[0];
	p_las2 = &las[4];
	printf("%ld", p_las2 - p_las1);
	
	printf("\n…………………………\n");
	return 0;
}