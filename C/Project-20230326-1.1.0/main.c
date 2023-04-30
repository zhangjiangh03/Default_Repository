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
	printf("*             ��1����ʼ             *\n");
	printf("*             ��2���˳�             *\n");
	printf("*                                   *\n");
	printf("*************************************\n");
	printf("��ѡ�� > \n");
}

/* ��ʼ������Ϊ�ո� */
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

	/* ��ӡ���� */
	for (colsNum = 0; colsNum < cols_F; colsNum++)
	{
		printf("  %d ", colsNum);
	}
	printf("\n");

	/* ��ӡ����� */
	for (int i = 0, rowsNum = 0; i < rows_F; i++, rowsNum++)
	{
		/* ��ӡ���� */
		printf(" %d ", rowsNum);

		/* ��ӡ���� */
		for (int j = 0; j < cols_F; j++)
		{
			/* ռλ���������Ӵ�� */
			printf(" %c ", chessBoard_F[i][j]);

			/* ���һ�в��ô�ӡ */
			if (j < rows_F - 1)
			{
				printf("��");
			}
		}
		printf("\n");
		printf("   ");

		/* ��ӡ���� */
		if (i < rows_F - 1)
		{
			for (int j = 0; j < rows_F; j++)
			{
				printf("������");

				/* ���һ�в��ô�ӡ */
				if (j < rows_F - 1)
				{
					printf("��"); 
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

	printf("������ > \n");

	do
	{
		scanf("%d %d", &input_row, &input_col);

		/* �Ϸ����ж� */

		/* �������귶Χ�ж� */
		if (input_row < 0 || input_row > rows_F || input_col < 0 || input_col > cols_F)
		{
			printf("���귶Χ�������������� > \n");
			continue;
		}
		else if ((input_row > 0 || input_row < rows_F) && (input_col > 0 || input_col < cols_F))
		{
			/* �����������������ж� */
			if (chessBoard_F[input_row][input_col] == ' ')
			{
				chessBoard_F[input_row][input_col] = '*';
				break;
			}
			else if (chessBoard_F[input_row][input_col] != ' ')
			{
				printf("�������ӣ����������� > \n");
				continue;
			}
		}
	} while (1);
}

void chessControlByPC(char chessBoard_F[ROWS][COLS], int rows_F, int cols_F, int winnnum)
{
	int i = 0;
	int j = 0;

	/* ������ */

	/* ��һ����� */
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

	/* �ڶ������ */
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

	/* ��������� */
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

	/* ������ */

	/* ��һ����� */
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

	/* �ڶ������ */
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

	/* ��������� */
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

	/* �Խ����� */
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
		/* ����� */
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

	/* ���Ӯ */
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
	/* PCӮ */
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
			printf("���Ӯ");
			break;
		}
		else if(winJudge == 0)
		{
			printf("PCӮ");
			break;
		}
		else if (winJudge == 2)
		{
			printf("ƽ��");
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