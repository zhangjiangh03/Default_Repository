/*
* �ļ�����FunctionDeclaration.h
* ʵ�ֹ��ܣ���������
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include "MacroDefinition.h" //�궨�塢����ͷ�ļ�

void StartMenu(void);
void Game(void);
void PlayIng(void);
void GameInit(char checkboard[CHECKERBOARD_ROW][CHECKERBOARD_COLUMN], int row, int column);
void GameBoard(char checkboard[CHECKERBOARD_ROW][CHECKERBOARD_COLUMN], int row, int column);
void GamerControl(char checkboard[CHECKERBOARD_ROW][CHECKERBOARD_COLUMN], int row, int column);
void ComputerControl(char checkboard[CHECKERBOARD_ROW][CHECKERBOARD_COLUMN], int row, int column);
int WinGame(char checkboard[CHECKERBOARD_ROW][CHECKERBOARD_COLUMN], int row, int column);
int MyIsdigit(int num);