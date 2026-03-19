// AW & GLG p7 Tic-Tac-Toe
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

char number[] = {'1','2','3','4','5','6','7','8','9'};

 // AW: function to print playing board

void board() {
    printf(" %c | %c | %c \n", number[0], number[1], number[2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", number[3], number[4], number[5]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", number[6], number[7], number[8]);
}

// AW & GLG: the platers move 

int player() {
    while (true) {
        int move;
        printf("Pick a number where to put the X please!: ");
        scanf("%d", &move);

        if (move < 1 || move > 9) {
            printf("Choose only numbers 1–9 please!\n");
            continue;
        }

        if (number[move-1] == 'X' || number[move-1] == 'O') {
            printf("Spot is already taken, pick something new!\n");
            continue;
        }

        number[move-1] = 'X';
        board();
        return move;
    }
}

// AW: the move that the computer makes on the board

int computer() {
    int o;

    while (true) {
        o = (rand() % 9) + 1;

        if (number[o-1] != 'X' && number[o-1] != 'O') {
            number[o-1] = 'O';
            printf("Computer chose: %d\n", o);
            board();
            return o;
        }
    }
}
 // GLG: to determine if the number combos are winning

bool check_winner(char p) {
    int wins[8][3] = {
        {0,1,2}, {3,4,5}, {6,7,8},
        {0,3,6}, {1,4,7}, {2,5,8},
        {0,4,8}, {2,4,6}
    };

    for (int i = 0; i < 8; i++) {
        int a = wins[i][0];
        int b = wins[i][1];
        int c = wins[i][2];

        if (number[a] == p && number[b] == p && number[c] == p) {
            return true;
        }
    }

    return false;
}

// GLG: reseting the board after playing 

void reset_board() {
    for (int i = 0; i < 9; i++) {
        number[i] = '1' + i;
    }
}

// AW & GLG: main function to put all others together and print out the winning or loosing statements

int main() {
    srand(time(NULL));

    char again[10];

    do {
        reset_board();
        printf("Hello player! Let's play TIC-TAC-TOE!!\n");
        board();

        while (true) {
            player();
            if (check_winner('X')) {
                printf("Player is our winner!\n");
                break;
            }

            computer();
            if (check_winner('O')) {
                printf("Computer wins this time HA!\n");
                break;
            }
        }

        printf("Good job! Would you like to play again? (yes/no): \n");
        scanf("%s", again);

    } while (strcmp(again, "yes") == 0);

    printf("Hope to have you play again!\n");
    return 0;
}
