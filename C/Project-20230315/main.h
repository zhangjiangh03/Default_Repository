/*
* Copyright (c) 2023,YueyeNote
* All rights reserved.
*
* �ļ����ƣ�main.h
* �ļ���ʶ��ͷ�ļ��ļ��������궨�塢��������
* ժҪ�����������õ�ͷ�ļ����Լ����еĺ��������ͺ궨�壬
*
* ��ǰ�汾��1.0 Beta
* ���ߣ��Ž���Zhang
* �������ڣ�2023��3��15��
* ������ڣ�2023��3����
*/

/* Visual Studio 2022 .C������� */
#define _CRT_SECURE_NO_WARNINGS 1

/**************************************** ͷ�ļ����� ****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**************************************** �궨�� ****************************************/
#define ROW 5
#define COLUMN 5
#define Number_Of_Menus 3

/**************************************** �������� ****************************************/
void Menus();//���˵�

void Game_Chess();//����
void Initialize_Checkerboard(char checkerboard[ROW][COLUMN], int row, int column);//���̳�ʼ��
void Display_Checkerboard(char checkerboard[ROW][COLUMN], int row, int column);//��ʾ����
void Game_Player_Move(char checkerboard[ROW][COLUMN], int row, int column);//���
void Machine_Player_Move(char checkerboard[ROW][COLUMN], int row, int column);//����

char Game_Chess_Judge_Winner(char checkerboard[ROW][COLUMN], int row, int column);//�ж���Ӯ