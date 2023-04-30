/*
* Copyright (c) 2023,YueyeNote
* All rights reserved.
*
* �ļ����ƣ�game.c
* �ļ���ʶ����Ϸʵ�ֺ���
* ժҪ����Ϸʵ�ֺ��������Ͱ���......
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

/**************************************** ���� ****************************************/
void Game_Chess()
{
	char checkerboard[ROW][COLUMN];
	Initialize_Checkerboard(checkerboard, ROW, COLUMN);
	Display_Checkerboard(checkerboard, ROW, COLUMN);
	char ret = 0;
	while (1)
	{
		Game_Player_Move(checkerboard, ROW, COLUMN);
		Display_Checkerboard(checkerboard, ROW, COLUMN);
		char ret1 = Game_Chess_Judge_Winner(checkerboard, ROW, COLUMN);
		if (ret1 != 'C')
		{
			break;
		}
		Machine_Player_Move(checkerboard, ROW, COLUMN);
		Display_Checkerboard(checkerboard, ROW, COLUMN);
		char ret2 = Game_Chess_Judge_Winner(checkerboard, ROW, COLUMN);
		if (ret2 != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��*��\n");
		Display_Checkerboard(checkerboard, ROW, COLUMN);
	}
	else if (ret == '#')
	{
		printf("��#��\n");
		Display_Checkerboard(checkerboard, ROW, COLUMN);
	}
	else
	{
		printf("Dogfall ! \n");
		Display_Checkerboard(checkerboard, ROW, COLUMN);
	}
}

/**************************************** ɨ�� ****************************************/