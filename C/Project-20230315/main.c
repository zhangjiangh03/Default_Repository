/*
* Copyright (c) 2023,YueyeNote
* All rights reserved.
*
* �ļ����ƣ�main.c
* �ļ���ʶ���������
*
* ��ǰ�汾��1.0 Beta
* ���ߣ��Ž���Zhang
* �������ڣ�2023��3��15��
* ������ڣ�2023��3����
* ��ע������Ŀ�û���ʹ��C���Ա�д��Ϊѧϰ��Ŀ
*/

/* Visual Studio 2022 .C������� */
#define _CRT_SECURE_NO_WARNINGS 1

/* ͷ�ļ����� */
#include "main.h"

/**************************************** ������ ****************************************/
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;

	Game_Chess();


	/*
	do
	{
		Menus();
		printf("�����롾��š� : ");
		scanf("%d", &input);

		switch (input)
		{
		case 00:
			system("cls");
			printf("�˳��ɹ���\n ");
			break;
		case 01:
			system("cls");
			printf("��ѧ����\n ");
			break;
		case 02:
			system("cls");
			printf("��ԭ\n ");
			break;
		default:
			system("cls");
			printf("����������\n ");
			break;
		}
	} while (input);
	*/
	return 0;
}