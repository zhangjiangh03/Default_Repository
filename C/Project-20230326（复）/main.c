#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 3

void Menu(void)
{
	printf("*************************************\n");
	printf("*                                   *\n");
	printf("*             【1】开始             *\n");
	printf("*             【2】退出             *\n");
	printf("*                                   *\n");
	printf("*************************************\n");
	printf("请选择 > \n");
}

/* 初始化棋盘为空格 */
void chessBoardInit(char chessBoard_F[ROWS][COLS], int rows_F, int cols_F)
{
	for (int i = 0; i < rows_F; i++)
	{
		for (int j = 0; j < cols_F; j++)
		{
			chessBoard_F[i][j] = ' ';
		}
	}
}

void chessBoardDisplay(char chessBoard_F[ROWS][COLS], int rows_F, int cols_F)
{
	int rowsNum = 0;
	int colsNum = 0;

	printf("  ");

	/* 打印列数 */
	for (colsNum = 0; colsNum < cols_F; colsNum++)
	{
		printf("  %d ", colsNum);
	}
	printf("\n");

	/* 打印表格线 */
	for (int i = 0, rowsNum = 0; i < rows_F; i++, rowsNum++)
	{
		/* 打印行数 */
		printf(" %d ", rowsNum);

		/* 打印列线 */
		for (int j = 0; j < cols_F; j++)
		{
			/* 占位，用于棋子存放 */
			printf(" %c ", chessBoard_F[i][j]);

			/* 最后一列不用打印 */
			if (j < rows_F - 1)
			{
				printf("│");
			}
		}
		printf("\n");
		printf("   ");

		/* 打印行线 */
		if (i < rows_F - 1)
		{
			for (int j = 0; j < rows_F; j++)
			{
				printf("───");

				/* 最后一列不用打印 */
				if (j < rows_F - 1)
				{
					printf("┼"); 
				}
			}
			printf("\n");
		}
	}
	printf("\n");
}

void chessControlByGamer(char chessBoard_F[ROWS][COLS], int rows_F, int cols_F)
{
	int input_row = 0;
	int input_col = 0;

	printf("请下棋 > \n");

	do
	{
		scanf("%d %d", &input_row, &input_col);

		/* 合法性判断 */

		/* 输入坐标范围判断 */
		if (input_row < 0 || input_row > rows_F || input_col < 0 || input_col > cols_F)
		{
			printf("坐标范围错误，请重新下棋 > \n");
			continue;
		}
		else if ((input_row > 0 || input_row < rows_F) && (input_col > 0 || input_col < cols_F))
		{
			/* 输入坐标有无棋子判断 */
			if (chessBoard_F[input_row][input_col] == ' ')
			{
				chessBoard_F[input_row][input_col] = '*';
				break;
			}
			else if (chessBoard_F[input_row][input_col] != ' ')
			{
				printf("已有棋子，请重新下棋 > \n");
				continue;
			}
		}
	} while (1);
}

void chessControlByPC(char chessBoard_F[ROWS][COLS], int rows_F, int cols_F, int winnnum)
{
	int i = 0;
	int j = 0;

	/* 行阻拦 */

	/* 第一行情况 */
	if (chessBoard_F[0][i] == '*' && chessBoard_F[0][i + 1] == '*' && chessBoard_F[0][i + 2] == ' ')
	{
		chessBoard_F[0][i + 2] = '#';
	}
	else if (chessBoard_F[0][i] == '*' && chessBoard_F[0][i + 2] == '*' && chessBoard_F[0][i + 1] == ' ')
	{
		chessBoard_F[0][i + 1] = '#';
	}
	else if (chessBoard_F[0][i + 1] == '*' && chessBoard_F[0][i + 2] == '*' && chessBoard_F[0][i] == ' ')
	{
		chessBoard_F[0][i] = '#';
	}

	/* 第二行情况 */
	else if (chessBoard_F[1][i] == '*' && chessBoard_F[1][i + 1] == '*' && chessBoard_F[1][i + 2] == ' ')
	{
		chessBoard_F[1][i + 2] = '#';
	}
	else if (chessBoard_F[1][i] == '*' && chessBoard_F[1][i + 2] == '*' && chessBoard_F[1][i + 1] == ' ')
	{
		chessBoard_F[1][i + 1] = '#';
	}
	else if (chessBoard_F[1][i + 1] == '*' && chessBoard_F[1][i + 2] == '*' && chessBoard_F[1][i] == ' ')
	{
		chessBoard_F[1][i] = '#';
	}

	/* 第三行情况 */
	else if (chessBoard_F[2][i] == '*' && chessBoard_F[2][i + 1] == '*' && chessBoard_F[2][i + 2] == ' ')
	{
		chessBoard_F[2][i + 2] = '#';
	}
	else if (chessBoard_F[2][i] == '*' && chessBoard_F[2][i + 2] == '*' && chessBoard_F[2][i + 1] == ' ')
	{
		chessBoard_F[2][i + 1] = '#';
	}
	else if (chessBoard_F[2][i + 1] == '*' && chessBoard_F[2][i + 2] == '*' && chessBoard_F[2][i] == ' ')
	{
		chessBoard_F[2][i] = '#';
	}

	/* 列阻拦 */

	/* 第一行情况 */
	else if (chessBoard_F[j][0] == '*' && chessBoard_F[j + 1][0] == '*' && chessBoard_F[j + 2][0] == ' ')
	{
		chessBoard_F[j + 2][0] = '#';
	}
	else if (chessBoard_F[j][0] == '*' && chessBoard_F[j + 2][0] == '*' && chessBoard_F[j + 1][0] == ' ')
	{
		chessBoard_F[j + 1][0] = '#';
	}
	else if (chessBoard_F[j + 1][0] == '*' && chessBoard_F[j + 2][0] == '*' && chessBoard_F[j][0] == ' ')
	{
		chessBoard_F[j][0] = '#';
	}

	/* 第二行情况 */
	else if (chessBoard_F[j][1] == '*' && chessBoard_F[j + 1][1] == '*' && chessBoard_F[j + 2][1] == ' ')
	{
		chessBoard_F[j + 2][1] = '#';
	}
	else if (chessBoard_F[j][1] == '*' && chessBoard_F[j + 2][1] == '*' && chessBoard_F[j + 1][1] == ' ')
	{
		chessBoard_F[j + 1][1] = '#';
	}
	else if (chessBoard_F[j + 1][1] == '*' && chessBoard_F[j + 2][1] == '*' && chessBoard_F[j][1] == ' ')
	{
		chessBoard_F[j][1] = '#';
	}

	/* 第三行情况 */
	else if (chessBoard_F[j][2] == '*' && chessBoard_F[j + 1][2] == '*' && chessBoard_F[j + 2][2] == ' ')
	{
		chessBoard_F[j + 2][2] = '#';
	}
	else if (chessBoard_F[j][2] == '*' && chessBoard_F[j + 2][2] == '*' && chessBoard_F[j + 1][2] == ' ')
	{
		chessBoard_F[j + 1][2] = '#';
	}
	else if (chessBoard_F[j + 1][2] == '*' && chessBoard_F[j + 2][2] == '*' && chessBoard_F[j][2] == ' ')
	{
		chessBoard_F[j][2] = '#';
	}

	/* 对角阻拦 */
	else if (chessBoard_F[j][i] == '*' && chessBoard_F[j + 1][i + 1] == '*' && chessBoard_F[j + 2][i + 2] == ' ')
	{
		chessBoard_F[j + 2][i + 2] = '#';
	}
	else if (chessBoard_F[j][i] == '*' && chessBoard_F[j + 2][i + 2] == '*' && chessBoard_F[j + 1][i + 1] == ' ')
	{
		chessBoard_F[j + 1][i + 1] = '#';
	}
	else if (chessBoard_F[j + 1][i + 1] == '*' && chessBoard_F[j + 2][i + 2] == '*' && chessBoard_F[j][i] == ' ')
	{
		chessBoard_F[j][i] = '#';
	}
	else
	{
		/* 随机下 */
		do
		{
			int x = rand() % rows_F;
			int y = rand() % cols_F;
			if (chessBoard_F[x][y] == ' ')
			{
				chessBoard_F[x][y] = '#';
				break;
			}
			/*else if (chessBoard_F[j][i] != ' ' && chessBoard_F[j][i + 1] != ' ' && chessBoard_F[j][i + 2] != ' ' &&
					chessBoard_F[j + 1][i] != ' ' && chessBoard_F[j + 1][i + 1] != ' ' && chessBoard_F[j + 1][i + 2] != ' ' &&
					chessBoard_F[j + 2][i] != ' ' && chessBoard_F[j + 2][i + 1] != ' ' && chessBoard_F[j + 2][i + 2] != ' ')
			*/
			else
			{
				break;
			}
		} while (1);
	}
}

int winJudge(char chessBoard_F[ROWS][COLS], int rows_F, int cols_F)
{
	int i = 0;
	int j = 0;

	/* 玩家赢 */
	if ((chessBoard_F[0][i] == '*' && chessBoard_F[0][i + 1] == '*' && chessBoard_F[0][i + 2] == '*') ||
		(chessBoard_F[0][i + 1] == '*' && chessBoard_F[0][i + 2] == '*' && chessBoard_F[0][i] == '*') ||
		(chessBoard_F[0][i + 2] == '*' && chessBoard_F[0][i] == '*' && chessBoard_F[0][i + 1] == '*') ||

		(chessBoard_F[1][i] == '*' && chessBoard_F[1][i + 1] == '*' && chessBoard_F[1][i + 2] == '*') ||
		(chessBoard_F[1][i + 1] == '*' && chessBoard_F[1][i + 2] == '*' && chessBoard_F[1][i] == '*') ||
		(chessBoard_F[1][i + 2] == '*' && chessBoard_F[1][i] == '*' && chessBoard_F[1][i + 1] == '*') ||

		(chessBoard_F[2][i] == '*' && chessBoard_F[2][i + 1] == '*' && chessBoard_F[2][i + 2] == '*') ||
		(chessBoard_F[2][i + 1] == '*' && chessBoard_F[2][i + 2] == '*' && chessBoard_F[2][i] == '*') ||
		(chessBoard_F[2][i + 2] == '*' && chessBoard_F[2][i] == '*' && chessBoard_F[2][i + 1] == '*'))
	{
		return 1;
	}
	else if((chessBoard_F[j][i] == '*' && chessBoard_F[j + 1][i + 1] == '*' && chessBoard_F[j + 2][i + 2] == '*') ||
			(chessBoard_F[j + 1][i + 1] == '*' && chessBoard_F[j + 2][i + 2] == '*' && chessBoard_F[j][i] == '*') ||
			(chessBoard_F[j + 2][i + 2] == '*' && chessBoard_F[j][i] == '*' && chessBoard_F[j + 1][i + 1] == '*'))
	{
		return 1;
	}
	/* PC赢 */
	else if ((chessBoard_F[0][i] == '#' && chessBoard_F[0][i + 1] == '#' && chessBoard_F[0][i + 2] == '#') ||
			(chessBoard_F[0][i + 1] == '#' && chessBoard_F[0][i + 2] == '#' && chessBoard_F[0][i] == '#') ||
			(chessBoard_F[0][i + 2] == '#' && chessBoard_F[0][i] == '#' && chessBoard_F[0][i + 1] == '#') ||

			(chessBoard_F[1][i] == '#' && chessBoard_F[1][i + 1] == '#' && chessBoard_F[1][i + 2] == '#') ||
			(chessBoard_F[1][i + 1] == '#' && chessBoard_F[1][i + 2] == '#' && chessBoard_F[1][i] == '#') ||
			(chessBoard_F[1][i + 2] == '#' && chessBoard_F[1][i] == '#' && chessBoard_F[1][i + 1] == '#') ||

			(chessBoard_F[2][i] == '#' && chessBoard_F[2][i + 1] == '#' && chessBoard_F[2][i + 2] == '#') ||
			(chessBoard_F[2][i + 1] == '#' && chessBoard_F[2][i + 2] == '#' && chessBoard_F[2][i] == '#') ||
			(chessBoard_F[2][i + 2] == '#' && chessBoard_F[2][i] == '#' && chessBoard_F[2][i + 1] == '#'))
	{
		return 0;
	}
	else if ((chessBoard_F[j][i] == '#' && chessBoard_F[j + 1][i + 1] == '#' && chessBoard_F[j + 2][i + 2] == '#') ||
		(chessBoard_F[j + 1][i + 1] == '#' && chessBoard_F[j + 2][i + 2] == '#' && chessBoard_F[j][i] == '#') ||
		(chessBoard_F[j + 2][i + 2] == '#' && chessBoard_F[j][i] == '#' && chessBoard_F[j + 1][i + 1] == '#'))
	{
		return 0;
	}
	else if (chessBoard_F[j][i] != ' ' && chessBoard_F[j][i + 1] != ' ' && chessBoard_F[j][i + 2] != ' ' &&
			chessBoard_F[j + 1][i] != ' ' && chessBoard_F[j + 1][i + 1] != ' ' && chessBoard_F[j + 1][i + 2] != ' ' &&
			chessBoard_F[j + 2][i] != ' ' && chessBoard_F[j + 2][i + 1] != ' ' && chessBoard_F[j + 2][i + 2] != ' ')
	{
		return 2;
	}
	else
	{
		return 3;
	}
}

void Game(char chessBoard_F[ROWS][COLS], int rows_F, int cols_F)
{
	chessBoardInit(chessBoard_F, ROWS, COLS);
	chessBoardDisplay(chessBoard_F, ROWS, COLS);
	do
	{
		chessControlByGamer(chessBoard_F, ROWS, COLS);
		chessControlByPC(chessBoard_F, ROWS, COLS, winJudge(chessBoard_F, ROWS, COLS));
		system("cls");
		chessBoardDisplay(chessBoard_F, ROWS, COLS);
		winJudge(chessBoard_F, ROWS, COLS);
		if (winJudge == 1)
		{
			printf("玩家赢");
			break;
		}
		else if(winJudge == 0)
		{
			printf("PC赢");
			break;
		}
		else if (winJudge == 2)
		{
			printf("平局");
			break;
		}
	} while (1);
}

int main()
{
	char chessBoard[ROWS][COLS] = { 0 };
	srand((unsigned int)time(NULL));
	int input = 0; 
	do
	{
		Menu();
		scanf("%d", &input);
		if (input == 1)
		{
			system("cls");
			Game(chessBoard, ROWS, COLS);
		}
	} while (1);
	return 0;
}