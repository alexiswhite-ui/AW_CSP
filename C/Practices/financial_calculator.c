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
    scanf("%f", &utilities);

    float groceries;
    printf("What is your monthly groceries: ");
    scanf("%f", &groceries);

    float transport;
    printf("What is your monthly transportation: ");
    scanf("%f", &transport);

    int morgage = (rent/income*100);
    int bill = (utilities/income*100);
    int food = (groceries/income*100);
    int car = (transport/income*100);

    

    printf("Your rent is %.2f which is %.1d percent of your income\n", rent, morgage);

    printf("Your utilities is %.2f which is %.1d percent of your income\n", utilities, bill);

    printf("Your groceries is %.2f which is %.1d percent of your income\n", groceries, food);

    printf("Your transportation is %.2f which is %.1d percent of your income", transport, car);

    return 0;
    




}