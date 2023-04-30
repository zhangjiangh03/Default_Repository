#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#define BOARD_SIZE 3

void init_board(char board[][BOARD_SIZE]);
void print_board(char board[][BOARD_SIZE]);
int is_game_over(char board[][BOARD_SIZE]);
int is_valid_move(char board[][BOARD_SIZE], int row, int col);
void player_move(char board[][BOARD_SIZE]);
void computer_move(char board[][BOARD_SIZE]);