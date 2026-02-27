// AW p7 time of day
#include <stdio.h>

int main(){
    int time;
    printf("What is the time of day in military time: ");
    scanf("%d", &time);

    if (time <= 11 && time > 0){
        printf("Good Morning!");
    }else if (time >= 12 && time < 17){
        printf("Good Afternoon!");
    }else if (time >= 17 && time < 20){
        printf("Good Evening!");
    }else{
        printf("Good Night!");
    }

    return 0;
}