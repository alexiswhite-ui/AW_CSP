// AW p7 updated financial calculator
#include <stdio.h>

 float payment (char* cost){
    float monthly;
    printf("what is your monthly %s", cost);
    scanf("%f", &monthly);
    return monthly;
  }
  float income;
  float rent;
  float utilities;
  float groceries;
  float transport;

float percent(){
    
}
int morgage = (rent/income*100);
int bill = (utilities/income*100);
int food = (groceries/income*100);
int car = (transport/income*100);

int main(){
    income = payment("income:");
    
    rent = payment("rent/morgage: ");
    
    utilities = payment("utilities: ");

    groceries = payment("groceries ");

    transport = payment("transportation: ");


    

    printf("Your rent is %.2f which is %.1d percent of your income\n", rent, morgage);

    printf("Your utilities is %.2f which is %.1d percent of your income\n", utilities, bill);

    printf("Your groceries is %.2f which is %.1d percent of your income\n", groceries, food);

    printf("Your transportation is %.2f which is %.1d percent of your income", transport, car);

    return 0;
}
