#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	//结构体
	struct stu
	{
		char name[10];//1个汉字2/3字节,
		int age;
		char sex[5];
		char id[15];
	};
	struct stu s = { "张三",14,"男",2022102322 };
	printf("%s %d %s %c %d\n", s.name, s.age, s.sex, s.id, sizeof(char));
	return 0;
}