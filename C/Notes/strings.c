// AW strings notes
#include <stdio.h>
#include <string.h>

int main(){
    char subject[] = "Computer Science Principles";
    char school[] = "UCAS";
    char book[50];

    printf("What is your favorite book: ");
    //scanf("%s", &book);  //one word
    fgets(book, sizeof(book), stdin);  //adds anew line but works for multiple words


    printf("This is %s at %s. It is awesome!\n", subject, school);
    printf("%sIs a cool book!\n", book);

    //Concatenation
    char first[] = "Ally";
    char last[] = "White";
    char full_name[20];

    first[0] = 'M';
    first[1] = 'a';
    first[2] = 'x';
    first[3] = ' ';


    strcat(full_name, first);
    strcat(full_name, " ");
    strcat(full_name, last);

    printf("%s\n", full_name);

    //length of string
    printf("%lu\n", strlen(full_name));




    return 0;
}