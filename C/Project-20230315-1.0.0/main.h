/*
* Copyright (c) 2023,YueyeNote
* All rights reserved.
*
* 文件名称：main.h
* 文件标识：头文件文件包含、宏定义、函数声明
* 摘要：包含了所用的头文件，以及所有的函数声明和宏定义，
*
* 当前版本：1.0 Beta
* 作者：张江寒Zhang
* 制作日期：2023年3月15日
* 完成日期：2023年3月日
*/

/* Visual Studio 2022 .C警告忽略 */
#define _CRT_SECURE_NO_WARNINGS 1

/**************************************** 头文件包含 ****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**************************************** 宏定义 ****************************************/
#define ROW 5
#define COLUMN 5
#define Number_Of_Menus 3

/**************************************** 函数声明 ****************************************/
void Menus();//主菜单

void Game_Chess();//棋盘
void Initialize_Checkerboard(char checkerboard[ROW][COLUMN], int row, int column);//棋盘初始化
void Display_Checkerboard(char checkerboard[ROW][COLUMN], int row, int column);//显示棋盘
void Game_Player_Move(char checkerboard[ROW][COLUMN], int row, int column);//玩家
void Machine_Player_Move(char checkerboard[ROW][COLUMN], int row, int column);//机器

char Game_Chess_Judge_Winner(char checkerboard[ROW][COLUMN], int row, int column);//判断输赢