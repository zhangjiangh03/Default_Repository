#define _CRT_SECURE_NO_WARNINGS 1
/*******************************************************
*                                                      *
*                  2023��03��05��                      *
*                                                      *
********************************************************/
#include<stdio.h>
#define MAX 300//��ʶ����
extern int g_val;//����

enum Sex
{
	MALE = 1,//���Ը���ֵ
	FEMALE = 3,
	SECERT = 5
};

int main() {
	printf("%d", g_val);
	printf("\n");
/******************************************************/
	const int num = 20;//const���β��ɸ��ģ������� �����˳�����,���ʻ��Ǳ���
	//int arr[num] = { 0 };//����˵��num���ǳ���
	printf("\n");
	/******************************************************/
	/*ö�ٳ���,����һһ�оٵĳ���*/
	enum Sex s = MALE;//�������s����ֵ����MALE
	printf("%d\n", s);

	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECERT);
	printf("\n");
	/*******************************************************
	*                                                      *
	*  "�ַ���"          �ַ���������־\0                  *
	*         �ַ�����                                     *
	********************************************************/
	char arr[] = "hello";
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' ,'\0' };
	//char arr2[] = { 'a','b','c' };//abc��û�н�������������
	printf("%s\n", arr1);
	printf("%s\n", arr2);

	int len = strlen(arr2);
	printf("%d\n", len);//3 �󳤶�ʱ\0���������棬��Ԫ�ظ���ʱ\0��������

	/*
	char arr2[] = { 'a','b','c' };
	int len = strlen(arr2);
	printf("%d\n", len); // ������ֵ
	*/
	return 0;
}