/*
* Copyright (c) 2023,YueyeNote
* All rights reserved.
*
* 文件名称：main.c
* 文件标识：程序入口
*
* 当前版本：1.0 Beta
* 作者：张江寒Zhang
* 制作日期：2023年3月15日
* 完成日期：2023年3月日
* 备注：此项目用基本使用C语言编写，为学习项目
*/

/* Visual Studio 2022 .C警告忽略 */
#define _CRT_SECURE_NO_WARNINGS 1

/* 头文件包含 */
#include "main.h"

/**************************************** 主程序 ****************************************/
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;

	Game_Chess();


	/*
	do
	{
		Menus();
		printf("请输入【序号】 : ");
		scanf("%d", &input);

		switch (input)
		{
		case 00:
			system("cls");
			printf("退出成功！\n ");
			break;
		case 01:
			system("cls");
			printf("数学程序\n ");
			break;
		case 02:
			system("cls");
			printf("三原\n ");
			break;
		default:
			system("cls");
			printf("请重新输入\n ");
			break;
		}
	} while (input);
	*/
	return 0;
}