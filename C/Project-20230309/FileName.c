#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	//�ṹ��
	struct stu
	{
		char name[10];//1������2/3�ֽ�,
		int age;
		char sex[5];
		char id[15];
	};
	struct stu s = { "����",14,"��",2022102322 };
	printf("%s %d %s %c %d\n", s.name, s.age, s.sex, s.id, sizeof(char));
	return 0;
}