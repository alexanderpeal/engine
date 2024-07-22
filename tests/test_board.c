#include <stdio.h>
#include <assert.h>
#include "../src/board.h"

/**
 * Test that init_board() sets up the board as expected.
 */
void test_init_board() {
    init_board();

    assert(board[0][0] == 'r');
    assert(board[1][1] == 'p');
    assert(board[6][6] == 'P');
    assert(board[7][4] == 'K');
}

/**
 * Test that print_board() prints the board properly. Verify the test by
 * checking test_print_board_output.txt.
 */
void test_print_board() {
    freopen("test_print_board_output.txt", "w", stdout);
    print_board();
    fclose(stdout);
}

int main() {
    test_init_board();
    // test_print_board(); // Seems to be messing up stdout

    printf("All tests passed!\n");

    return 0;
}
