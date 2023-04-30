/*
* Copyright (c) 2023,YueyeNote
* All rights reserved.
*
* 文件名称：game.c
* 文件标识：游戏实现函数
* 摘要：游戏实现函数，阿巴阿巴......
*
* 当前版本：1.0 Beta
* 作者：张江寒Zhang
* 制作日期：2023年3月15日
* 完成日期：2023年3月日
*/

/* Visual Studio 2022 .C警告忽略 */
#define _CRT_SECURE_NO_WARNINGS 1

/* 头文件包含 */
#include "main.h"

/**************************************** 棋类 ****************************************/
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
		printf("【*】\n");
		Display_Checkerboard(checkerboard, ROW, COLUMN);
	}
	else if (ret == '#')
	{
		printf("【#】\n");
		Display_Checkerboard(checkerboard, ROW, COLUMN);
	}
	else
	{
		printf("Dogfall ! \n");
		Display_Checkerboard(checkerboard, ROW, COLUMN);
	}
}

/**************************************** 扫雷 ****************************************/