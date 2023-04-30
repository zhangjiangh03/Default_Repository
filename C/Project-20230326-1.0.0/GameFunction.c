/*
* 文件名：GameFunction.c
* 实现功能：函数实现
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include "MacroDefinition.h" //宏定义、引用头文件
#include "FunctionDeclaration.h" //函数声明

void StartMenu(void)
{
	printf("***************************************\n");
	printf("*            请输入数字进入           *\n");
	printf("*           【1】Start Game           *\n");
	printf("*           【2】Exit Game            *\n");
	printf("***************************************\n"); 
	printf("输入 > ");
}

void Game(void)
{
	char checkboard[CHECKERBOARD_ROW][CHECKERBOARD_COLUMN] = { 0 };
	GameInit(checkboard, CHECKERBOARD_ROW, CHECKERBOARD_COLUMN);
	GameBoard(checkboard, CHECKERBOARD_ROW, CHECKERBOARD_COLUMN);
	int judgewin = 0;
	do
	{
		GamerControl(checkboard, CHECKERBOARD_ROW, CHECKERBOARD_COLUMN);
		ComputerControl(checkboard, CHECKERBOARD_ROW, CHECKERBOARD_COLUMN);
		GameBoard(checkboard, CHECKERBOARD_ROW, CHECKERBOARD_COLUMN);
		judgewin = WinGame(checkboard, CHECKERBOARD_ROW, CHECKERBOARD_COLUMN);
	} while (!judgewin);
	if (judgewin == 1)
	{
		printf("恭喜玩家获胜！\n");
	}
	else if (judgewin == 2)
	{
		printf("还需继续努力，机器获胜！\n");
	}
	else if (judgewin == 3)
	{
		printf("平局！\n");
	}
}
void GameInit(char checkboard[CHECKERBOARD_ROW][CHECKERBOARD_COLUMN], int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < column; j++)
		{
			checkboard[i][j] = ' ';
		}
	}
}

int WinGame(char checkboard[CHECKERBOARD_ROW][CHECKERBOARD_COLUMN], int row, int column)
{
	if (checkboard[0][0] == checkboard[0][1] == checkboard[0][2] == '*' ||
		checkboard[1][0] == checkboard[1][1] == checkboard[1][2] == '*' ||
		checkboard[2][0] == checkboard[2][1] == checkboard[2][2] == '*' ||
		checkboard[0][0] == checkboard[1][1] == checkboard[2][2] == '*')
	{
		return 1;
	}
	else if (checkboard[0][0] == checkboard[0][1] == checkboard[0][2] == '#' ||
		checkboard[1][0] == checkboard[1][1] == checkboard[1][2] == '#' ||
		checkboard[2][0] == checkboard[2][1] == checkboard[2][2] == '#' ||
		checkboard[0][0] == checkboard[1][1] == checkboard[2][2] == '#')
	{
		return 2;
	}
	else
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				if (checkboard[i][j] != ' ')
				{
					return 3;
				}
			}
		}
	}

	
}

void GameBoard(char checkboard[CHECKERBOARD_ROW][CHECKERBOARD_COLUMN], int row, int column)
{
	int i = 0;
	int j = 0;
	int rowNum = 0;
	int columnNum = 0;
	for (rowNum = 0; rowNum < row; rowNum++)
	{
		printf(" %d  ", rowNum);
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			printf(" %c ", checkboard[i][j]);
			if (j < row - 1)
			{
				printf("│");
			}
		}
		printf(" %d ", columnNum);
		columnNum++;
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < column; j++)
			{
				printf("───");
				if (j < column - 1)
				{
					printf("┼");
				}
			}
			printf("\n");
		}
	}
}

void GamerControl(char checkboard[CHECKERBOARD_ROW][CHECKERBOARD_COLUMN], int row, int column)
{
	printf("请下棋（输入坐标） > ");
	int rrow = 0;
	int rcolumn = 0;
	do
	{
		scanf("%d %d", &rrow, &rcolumn);
		if (rrow < row && rcolumn < column)
		{
			checkboard[column][row] = '*';
			break;
		}
		else
		{
			printf("请重新下棋 > ");
			continue;
		}
	} while (1);
}

void ComputerControl(char checkboard[CHECKERBOARD_ROW][CHECKERBOARD_COLUMN], int row, int column)
{
	int newRow = 0;
	int newColumn = 0;
	/* 行判断 */
		if (checkboard[0][0] == checkboard[0][1] && (checkboard[0][0] == '*' || checkboard[0][1] == '*'))
		{
			checkboard[0][2] = '#';
		}
		else if (checkboard[0][1] == checkboard[0][2] && (checkboard[0][1] == '*' || checkboard[0][2] == '*'))
		{
			checkboard[0][0] = '#';
		}
		else if (checkboard[1][0] == checkboard[1][1] && (checkboard[1][0] == '*' || checkboard[1][1] == '*'))
		{
			checkboard[1][2] = '#';
		}
		else if (checkboard[1][1] == checkboard[1][2] && (checkboard[1][1] == '*' || checkboard[1][2] == '*'))
		{
			checkboard[1][0] = '#';
		}
		else if (checkboard[2][0] == checkboard[2][1] && (checkboard[2][0] == '*' || checkboard[2][1] == '*'))
		{
			checkboard[2][2] = '#';
		}
		else if (checkboard[2][1] == checkboard[2][2] && (checkboard[2][1] == '*' || checkboard[2][2] == '*'))
		{
			checkboard[2][0] = '#';
		}
		
		/* 列判断 */
		if (checkboard[0][0] == checkboard[1][0] && (checkboard[0][0] == '*' || checkboard[1][0] == '*'))
		{
			checkboard[2][0] = '#';
		}
		else if (checkboard[1][0] == checkboard[2][0] && (checkboard[1][0] == '*' || checkboard[2][0] == '*'))
		{
			checkboard[0][0] = '#';
		}
		else if (checkboard[1][1] == checkboard[2][1] && (checkboard[1][1] == '*' || checkboard[2][1] == '*'))
		{
			checkboard[0][1] = '#';
		}
		else if (checkboard[2][1] == checkboard[0][2] && (checkboard[2][1] == '*' || checkboard[0][2] == '*'))
		{
			checkboard[1][1] = '#';
		}
		else if (checkboard[0][2] == checkboard[1][2] && (checkboard[0][2] == '*' || checkboard[1][2] == '*'))
		{
			checkboard[2][2] = '#';
		}
		else if (checkboard[1][2] == checkboard[2][2] && (checkboard[1][2] == '*' || checkboard[2][2] == '*'))
		{
			checkboard[0][2] = '#';
		}

		/* 对角判断 */
		if (checkboard[0][0] == checkboard[1][1] && (checkboard[0][0] == '*' || checkboard[1][1] == '*'))
		{
			checkboard[2][2] = '#';
		}
		else if (checkboard[0][0] == checkboard[2][2] && (checkboard[0][0] == '*' || checkboard[2][2] == '*'))
		{
			checkboard[1][1] = '#';
		}
	}

int MyIsdigit(int num)
{
	int num_judge = 1;
	char c;
	while ((c = getchar()) != '\n')
	{
		if (!isdigit(c))
		{
			num_judge = 0;
		}
	}
	return num_judge;
}