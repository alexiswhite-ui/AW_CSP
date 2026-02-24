// AW strings notes
#include <stdio.h>

int main(){
    char subject[] = "Computer Science Principles";
    char school[] = "UCAS";
    char book[50];

    printf("What is your favorite book: ");
    scanf("%s", &book);


    printf("This is %s at %s. It is awesome!\n", subject, school);
    printf("%s is a cool book!", book);


    return 0;
}