#include <stdio.h>
int main()
{
	printf("sizeof计算长度\n");
	printf("sizeof(int)=%ld\n",sizeof(int));//4
	printf("sizeof(long int)=%ld\n",sizeof(long int));//8
	printf("sizeof(short int)=%ld\n",sizeof(short int));//2
	printf("sizeof(char)=%ld\n",sizeof(char));//1
	printf("sizeof(float)=%ld\n",sizeof(float));//4
	printf("sizeof(double)=%ld\n",sizeof(double));//8
	return 0;
}