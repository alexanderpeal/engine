#include <stdlib.h>
#include <stdio.h>

// Most moves will be of length 4, but some can be of length 5
#define MOVE_BUFFER_SIZE 5

char board[8][8];

void init_board() {
    char starting_board[8][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    };

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            board[i][j] = starting_board[i][j];
        }
    }
}

void print_board() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

void make_move(char* move) {
    // int length = 0;
    // char *buffer = (char *)malloc(MOVE_BUFFER_SIZE * sizeof(char));
    // if (buffer == NULL) {
    //     perror("Memory allocation failed");
    //     exit(EXIT_FAILURE);
    // }

    printf("Making move: %s", move);
}
