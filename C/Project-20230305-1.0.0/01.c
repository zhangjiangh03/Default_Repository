#define _CRT_SECURE_NO_WARNINGS 1
//������
/********************************************************
*                                                       *
*              2023��03��04��                           *
*                                                       *
*********************************************************/

int b = 30;//ȫ�ֱ���
#include<stdio.h>
int main(){
	printf("hello\n");
	printf("\n");

	/***************************************************/

	//sizeof() �������ͱ����Ŀռ��С����λ���ֽ�Byte��C���Թ涨 sizeof(long) >= sizeof(int)
	printf("%d (int)\n", sizeof(int));//���ͣ���С4
	printf("%d (short)\n", sizeof(short));//�����ͣ���С2
	printf("%d (char)\n", sizeof(char));//�ַ��������ͣ���С1
	printf("%d (long)\n", sizeof(long));//�����ͣ���С4
	printf("%d (long long)\n", sizeof(long long));//�������ͣ���С8
	printf("%d (double)\n", sizeof(double));//˫���ȸ����ͣ���С8
	printf("%d (float)\n", sizeof(float));//�����ȸ����ͣ���С4
	printf("\n");

	/***************************************************/

	//����
	int age = 20;
	double weight = 75.5;
	age = age + 1;
	printf("%d\n", age);
	printf("%lf\n", weight);//%f ��Ӧ float��%lf ��Ӧ double
	printf("\n");

	/***************************************************/

	int a = 20;//�ֲ�������ȫ�ֱ�����ֲ�������������ͬʱ���ֲ���������
	printf("%d %d\n", a, b);
	printf("\n");

	/***************************************************/

	/********************************************************
	*                                                       *
	*              �������scanf                            *
	*                                                       *
	*********************************************************/
	int c,d;
	scanf("%d %d", &c, &d);
	int sum = c + d;
	printf("%d\n", sum);

	return 0;
}