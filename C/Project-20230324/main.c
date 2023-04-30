#define _CRT_SECURE_NO_WARNINGS 1

#include "main.h"
int main()
{
    char board[BOARD_SIZE][BOARD_SIZE];
    int winner = 0;
    printf("Welcome to Tic Tac Toe!\n");
    printf("Player: X, Computer: O\n");
    init_board(board);
    print_board(board);
    while (winner == 0) {
        player_move(board);
        print_board(board);
        winner = is_game_over(board);
        if (winner != 0) {
            break;
        }
        computer_move(board);
        print_board(board);
        winner = is_game_over(board);
    }
    if (winner == 1) {
        printf("Congratulations! You win!\n");
    }
    else if (winner == 2) {
        printf("It's a tie!\n");
    }
    else {
        printf("Sorry, you lose!\n");
    }
    return 0;
}