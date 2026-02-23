// AE p7 finacial calculator
#include <stdio.h>

int main(){
    float income;
    printf("What is your monthly income:");
    scanf("%f", &income);

    float rent;
    printf("What is your monthly rent/morgage:");
    scanf("%f", &rent);

    float utilities;
    printf("What is your monthly utilities: ");
    scanf("%f", utilities);

    float groceries;
    printf("What is your monthly groceries: ");
    scanf("%f", groceries);

    float transport;
    printf("What is your monthly utilities: ");
    scanf("%f", transport);

    int morgage = (income/rent*100);
    int bill = (income/utilities*100);
    int food = (income/groceries*100);
    int car = (income/transport*100);

    

    printf("Your rent is %f which is %.1d of your income\n", rent, morgage);

    printf("Your utilities is %f which is %.1d of your income\n", utilities, bill);

    printf("Your groceries is %f which is %.1d of your income", groceries, food);

    printf("Your transportation is %f which is %.1d of your income", transport, car);

    return 0;
    




}