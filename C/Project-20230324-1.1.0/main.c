#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BOARD_SIZE 10
#define NUM_MINES 10
// 初始化棋盘
void init_board(int board[][BOARD_SIZE])
{
    int i, j;
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = 0;
        }
    }
}
// 随机布雷
void place_mines(int board[][BOARD_SIZE])
{
    int i, row, col;
    srand(time(NULL));
    for (i = 0; i < NUM_MINES; i++) {
        row = rand() % BOARD_SIZE;
        col = rand() % BOARD_SIZE;
        if (board[row][col] == -1) {
            i--;
        }
        else {
            board[row][col] = -1;
        }
    }
}
// 计算相邻格子中的雷数
int count_adjacent_mines(int board[][BOARD_SIZE], int row, int col)
{
    int count = 0, i, j;
    for (i = row - 1; i <= row + 1; i++) {
        for (j = col - 1; j <= col + 1; j++) {
            if (i >= 0 && i < BOARD_SIZE && j >= 0 && j < BOARD_SIZE && board[i][j] == -1) {
                count++;
            }
        }
    }
    return count;
}
// 显示棋盘
void display_board(int board[][BOARD_SIZE], int reveal)
{
    int i, j;
    printf("   ");
    for (j = 0; j < BOARD_SIZE; j++) {
        printf(" %d ", j);
    }
    printf("\n");
    printf("   ");
    for (j = 0; j < BOARD_SIZE; j++) {
        printf("---");
    }
    printf("\n");
    for (i = 0; i < BOARD_SIZE; i++) {
        printf(" %d|", i);
        for (j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] >= 0) {
                if (reveal || board[i][j] == 0) {
                    printf("   ");
                }
                else {
                    printf(" * ");
                }
            }
            else {
                printf(" X ");
            }
            if (j == BOARD_SIZE - 1) {
                printf("|");
            }
        }
        printf("\n");
    }
    printf("   ");
    for (j = 0; j < BOARD_SIZE; j++) {
        printf("---");
    }
    printf("\n");
}
// 判断落子是否合法
int is_valid_move(int board[][BOARD_SIZE], int row, int col)
{
    if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE) {
        return 0;
    }
    if (board[row][col] >= 0) {
        return 0;
    }
    return 1;
}
// 点击格子
int click(int board[][BOARD_SIZE], int row, int col)
{
    if (!is_valid_move(board, row, col)) {
        return 0;
    }
    if (board[row][col] == -1) {
        return -1;
    }
    board[row][col] = count_adjacent_mines(board, row, col);
    if (board[row][col] == 0) {
        click(board, row - 1, col - 1);
        click(board, row - 1, col);
        click(board, row - 1, col + 1);
        click(board, row, col - 1);
        click(board, row, col + 1);
        click(board, row + 1, col - 1);
        click(board, row + 1, col);
        click(board, row + 1, col + 1);
    }
    return 1;
}
int main()
{
    int board[BOARD_SIZE][BOARD_SIZE];
    int row, col, result = 0;
    init_board(board);
    place_mines(board);
    display_board(board, 0);
    while (result == 0) {
        printf("Enter row and column (separated by a space): ");
        scanf("%d %d", &row, &col);
        result = click(board, row, col);
        display_board(board, 1);
    }
    if (result == -1) {
        printf("Game over! You hit a mine.\n");
    }
    else {
        printf("Congratulations! You win!\n");
    }
    return 0;
}