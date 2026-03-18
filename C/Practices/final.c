// AW & GLG p7 Tic-Tac-Toe
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

char number[] = {'1','2','3','4','5','6','7','8','9'};

void board(){
        printf(" %c | %c | %c \n", number[0], number[1], number[2]);
        printf("---+---+---\n");
        printf(" %c | %c | %c \n", number[3], number[4], number[5]);
        printf("---+---+---\n");
        printf(" %c | %c | %c \n", number[6], number[7], number[8]);
    }

int main(){
    

    printf("Hello player! lets play TIC-TAC-TOE!!\n");
    board();

    return 0;

    
}
    
     int player(){

        while (true){
            int move;
            printf("Pick a number where to put the X please!: \n");
            scanf("%d", &move);
            
            if (move < 1 || move > 9){
                printf("That isn't an option on the board choose 1-9\n");
                if (1 <= move <=9){
                    }if (number[move-1] != 'X' && number[move-1] != 'O'){
                        number[move-1] = "X";
                        board();
                    }else if{
                        printf("spot is already taken plase pick something new!\n");
                    }else if{
                    printf("chose only numbers 1 through 9 please!\n");
            }else if{
                printf("Numbers only please!\n");
            }
        }
     }
     }

    char computer(){
        while();
                srand(time(NULL));
                printf("%d\n", (rand() %10));
                if (number[o-1] != 'X' && number[o-1] != 'O'){
                    number[o-1] = 'O';
                }
        }

    char check_winner(player){

        char win_conditions = (number[0],number[1],number[2]), (number[3],number[4],number[5]), (number[6],number[7],number[8]), (number[0],number[3],number[6]), (number[1],number[4],number[7]),(number[2],number[5],number[8]), (number[0],number[4],number[8]), (number[2],number[4],number[6]);
    
        for a,b,c in win_conditions;
            if number[a] == number[b] == number[c] == player;
                return true;
        return false;
    }


int main(){

   board();
   
   player();

    if(check_winner('X')){
        printf("Player is our winner!");
        char computer();
    }else if (check_winner('O')){
            printf("Computer wins this time HA!");
    }

    char again[10];
    printf("Good job! would you like to play again?: ");
    scanf("%s", &again);

    if (again != "yes"){
        printf("Hope to have you play again!");
    };  

    return 0;  
}