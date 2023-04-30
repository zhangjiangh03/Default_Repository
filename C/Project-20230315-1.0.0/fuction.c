/*
* Copyright (c) 2023,YueyeNote
* All rights reserved.
*
* 文件名称：fuction.c
* 文件标识：函数实现
* 摘要：包含了所用的所有的函数
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

/* 菜单 */
void Menus()
{
	printf("************************************************\n");
	printf("*             夜夜工具箱 Beta 1.0              *\n");
	printf("************************************************\n");
	printf("*              请选择你所需的项目              *\n");
	printf("*  本程序为学习项目，仅供参考，如有错误请指正  *\n");
	printf("************************************************\n");
	printf("*           输入【序号】即可进入程序           *\n");
	printf("*                                              *\n");
	printf("* 【01】数学小程序                             *\n");
	printf("* 【02】三原                                   *\n");
	printf("*                                              *\n");
	printf("* 【00】退出                                   *\n");
	printf("************************************************\n");
}

/**************************************** 棋类 ****************************************/
/* 初始化 */
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

/* 输出显示 */
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

/* 玩家 */
void Game_Player_Move(char checkerboard[ROW][COLUMN], int row, int column)
{
	printf("【*】\n");
	int x = 0;
	int y = 0;
	while(1)
	{
		printf("请输入【坐标】 : ");
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
				printf("【坐标】占用，请重新输入 ： ");
			}
		}
		else
		{
			printf("【坐标】错误，请重新输入 ： ");
		}
	}
}

/* 机器 */
void Machine_Player_Move(char checkerboard[ROW][COLUMN], int row, int column)
{
	printf("【#】\n");
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
/**************************************** 棋类 ****************************************/