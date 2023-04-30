#define _CRT_SECURE_NO_WARNINGS 1

#include "main.h"
// 初始化棋盘
void init_board(char board[][BOARD_SIZE])
{
    int i, j;
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = ' ';
        }
    }
}
// 打印棋盘
void print_board(char board[][BOARD_SIZE])
{
    int i, j;
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j != BOARD_SIZE - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i != BOARD_SIZE - 1) {
            printf("---+---+---\n");
        }
    }
}
// 判断棋局是否结束
int is_game_over(char board[][BOARD_SIZE])
{
    int i, j;
    // 判断每一行是否有连成一线的棋子
    for (i = 0; i < BOARD_SIZE; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return 1;
        }
    }
    // 判断每一列是否有连成一线的棋子
    for (j = 0; j < BOARD_SIZE; j++) {
        if (board[0][j] != ' ' && board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
            return 1;
        }
    }
    // 判断两个对角线是否有连成一线的棋子
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return 1;
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return 1;
    }
    // 判断是否平局
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 2;
}
// 判断落子是否合法
int is_valid_move(char board[][BOARD_SIZE], int row, int col)
{
    if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE) {
        return 0;
    }
    if (board[row][col] != ' ') {
        return 0;
    }
    return 1;
}
// 玩家下棋
void player_move(char board[][BOARD_SIZE])
{
    int row, col;
    printf("Your turn (row, col): ");
    scanf("%d %d", &row, &col);
    while (!is_valid_move(board, row, col)) {
        printf("Invalid move, please try again.\n");
        printf("Your turn (row, col): ");
        scanf("%d %d", &row, &col);
    }
    board[row][col] = 'X';
}
// 电脑下棋
void computer_move(char board[][BOARD_SIZE])
{
    int row, col;
    // 电脑随机下棋
    do {
        row = rand() % BOARD_SIZE;
        col = rand() % BOARD_SIZE;
    } while (!is_valid_move(board, row, col));
    board[row][col] = 'O';
    printf("Computer's move: (%d, %d)\n", row, col);
}