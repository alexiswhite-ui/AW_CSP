//AW p7 updated finacial calculator
#include <stdio.h>

float income, rent, utilities, groceries, transport;
float rent_percent, utilities_percent, groceries_percent, transportation;
float savings, savings_percent, spending_money;

void monthly(){
  printf("monthly income: ");
  scanf("%f", &income);
  printf("monthly rent/morage: ");
  scanf("%f", &rent);
  printf("monthly utilities: ");
  scanf("%f", &utilities);
  printf("monthly groceries: ");
  scanf("%f", &groceries);
  printf("monthly transportation: ");
  scanf("%f", &transport);

}

void percent(){
  rent_percent = (rent/income) * 100;
  utilities_percent = (utilities/income) * 100;
  groceries_percent = (groceries/income) * 100;
  transportation = (transport/income) * 100;
  savings_percent = 10.0;
  savings = (savings_percent / 100) * income;
  spending_money = income - (rent + utilities + groceries + transportation + savings);
}


int main(void){

  monthly();
  percent();

  printf("your rent is $%.2f and that is %.0f of your income\n", rent, rent_percent);
  printf("your utilities is $%.2f and that is %.0f of your income\n", utilities, utilities_percent);
  printf("your groceries is $%.2f and that is %.0f of your income\n", groceries, groceries_percent);
  printf("your transportation is $%.2f and that is %.0f of your income\n", transport, transportation);
  printf("you should save $%.2f a month, that is %.0f of your income\n", savings, savings_percent);
  printf("you have $%.2f of spending each month\n", spending_money);


  return 0;
  
}
