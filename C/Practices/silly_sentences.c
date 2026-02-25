// AW p7 silly sentences
#include <stdio.h>
#include <strings.h>

int main(){
    char alive[30];
    printf("Something Alive: ");
    scanf("%s", &alive);

    char adjective[30];
    printf("An adjective: ");
    scanf("%s", &adjective);


    int number;
    printf("A number: ");
    scanf("%d", &number);

    char adjective_two[30];
    printf("An adjective: ");
    scanf("%s", &adjective_two);

    char noun[30];
    printf("A noun: ");
    scanf("%s", &noun);


    strcat(adjective_two, " ");
    strcat(adjective_two, noun);

    printf("Hey, students at %s Elementary School!\nLet's take you %s class picture!\nPlease line up in %d rows and stand on your special %s.", alive, adjective, number, adjective_two);

    return 0;



}