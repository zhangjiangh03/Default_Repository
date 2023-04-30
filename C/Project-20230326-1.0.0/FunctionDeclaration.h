/*
* 文件名：FunctionDeclaration.h
* 实现功能：函数声明
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include "MacroDefinition.h" //宏定义、引用头文件

void StartMenu(void);
void Game(void);
void PlayIng(void);
void GameInit(char checkboard[CHECKERBOARD_ROW][CHECKERBOARD_COLUMN], int row, int column);
void GameBoard(char checkboard[CHECKERBOARD_ROW][CHECKERBOARD_COLUMN], int row, int column);
void GamerControl(char checkboard[CHECKERBOARD_ROW][CHECKERBOARD_COLUMN], int row, int column);
void ComputerControl(char checkboard[CHECKERBOARD_ROW][CHECKERBOARD_COLUMN], int row, int column);
int WinGame(char checkboard[CHECKERBOARD_ROW][CHECKERBOARD_COLUMN], int row, int column);
int MyIsdigit(int num);