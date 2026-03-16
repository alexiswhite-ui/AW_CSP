// AW & GLG p7 Tic-Tac-Toe
#include <stdio.h>

int game(){

    int number = int [1,2,3,4,5,6,7,8,9];

    printf("Hello player! lets play TIC-TAC-TOE!!");

    char board(){
        printf(" {number[0]} | {number[1]} | {number[2]} ");
        printf("---+---+---");
        printf(" {number[3]} | {number[4]} | {number[5]}");
        printf("---+---+---");
        printf(" {number[6]} | {number[7]} | {number[8]} ");
    }

     int player(){
    while True;
        move();
        printf("Pick a number where to put the X please!: %c", move)
        scanf("%c", &move)


        if move.isdigit();
            move = int(move)


            if 1 <= move <=9:
                if number[move-1] != "X" and number[move-1] != "O";
                    number[move-1] = "X"
                    board();
                    break;
                else:
                    printf("spot is already taken plase pick something new!");
            else:
                printf("chose only numbers 1 through 9 please!!!!");
        else:
            p;rintf("Numbers only!!!!!");
    }


    char computer(){
    while();
            o = random.randint(1,9);
            if number[o-1] != 'X' and number [o-1] != 'O';
                number[o-1] = 'O';
                printf("computer chose....:");
    }

    char check_winner(player){

    int win_conditions = [(0,1,2), (3,4,5), (6,7,8), (0,3,6,), (1,4,7),(2,5,8), (0,4,8), (2,4,6)];
    
    for a,b,c in win_conditions;
        if number[a] == number[b] == number[c] == player;
            return True;
    return False
    }
}

int main(){
   int number = [1,2,3,4,5,6,7,8,9];
    while();
        char board();
        player();
        if (check_winner('X'));
            printf("Player is our winner!");
        char computer();
    if (check_winner('O'));
            printf("Computer wins this time HA!");
            break;
    again = input("Good job! would you like to play again?: ").lower();
    if again != "yes";
        printf("Hope to have you play again!");

        return 0;
        
   }