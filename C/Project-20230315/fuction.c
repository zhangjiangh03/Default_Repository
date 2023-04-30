/*
* Copyright (c) 2023,YueyeNote
* All rights reserved.
*
* �ļ����ƣ�fuction.c
* �ļ���ʶ������ʵ��
* ժҪ�����������õ����еĺ���
*
* ��ǰ�汾��1.0 Beta
* ���ߣ��Ž���Zhang
* �������ڣ�2023��3��15��
* ������ڣ�2023��3����
*/

/* Visual Studio 2022 .C������� */
#define _CRT_SECURE_NO_WARNINGS 1

/* ͷ�ļ����� */
#include "main.h"

/* �˵� */
void Menus()
{
	printf("************************************************\n");
	printf("*             ҹҹ������ Beta 1.0              *\n");
	printf("************************************************\n");
	printf("*              ��ѡ�����������Ŀ              *\n");
	printf("*  ������Ϊѧϰ��Ŀ�������ο������д�����ָ��  *\n");
	printf("************************************************\n");
	printf("*           ���롾��š����ɽ������           *\n");
	printf("*                                              *\n");
	printf("* ��01����ѧС����                             *\n");
	printf("* ��02����ԭ                                   *\n");
	printf("*                                              *\n");
	printf("* ��00���˳�                                   *\n");
	printf("************************************************\n");
}

/**************************************** ���� ****************************************/
/* ��ʼ�� */
void Initialize_Checkerboard(char checkerboard[ROW][COLUMN], int row, int column)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			checkerboard[i][j] = ' ';
		}
	}
}

/* �����ʾ */
void Display_Checkerboard(char checkerboard[ROW][COLUMN], int row, int column)
{
	int i = 0;
	
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < column; j++)
		{
			printf(" %c ", checkerboard[i][j]); 
			if (j < column - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < column; j++)
			{
				printf("___");
				if (j < column - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

/* ��� */
void Game_Player_Move(char checkerboard[ROW][COLUMN], int row, int column)
{
	printf("��*��\n");
	int x = 0;
	int y = 0;
	while(1)
	{
		printf("�����롾���꡿ : ");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= column)
		{
			if (checkerboard[x - 1][y - 1] == ' ')
			{
				checkerboard[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����꡿ռ�ã����������� �� ");
			}
		}
		else
		{
			printf("�����꡿�������������� �� ");
		}
	}
}

/* ���� */
void Machine_Player_Move(char checkerboard[ROW][COLUMN], int row, int column)
{
	printf("��#��\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % column;
		if (checkerboard[x][y] == ' ')
		{
			checkerboard[x][y] = '#';
			break;
		}
	}
}

char  Game_Chess_Judge_Winner(char checkerboard[ROW][COLUMN], int row, int column)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (checkerboard[0][1] == checkerboard[0][2] && checkerboard[0][1] != ' ')
		{
			return checkerboard[0][2];
		}
	}
}
/**************************************** ���� ****************************************/