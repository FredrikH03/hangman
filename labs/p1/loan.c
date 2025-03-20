#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <math.h>

float loanAmount;
float paymentAmount;
float annualInterestRate;
int month;
float monthlyInterest;

int display(){

  loanAmount = 459.6;
  paymentAmount = 39.98;
  annualInterestRate = 7.25;

  printf("\n\n");

  printf("Mon   Start   Int    Pay   Close");

  printf("\n");

  for(int month = 1; true; month++){
    printf("%03d", month);
    printf("%8.2f", loanAmount);
    monthlyInterest = (loanAmount * ((annualInterestRate / 100)/12));
    printf("%6.2f", monthlyInterest);
    loanAmount += monthlyInterest;
    if(loanAmount < paymentAmount){
      paymentAmount = loanAmount;
      loanAmount -= loanAmount;
      printf("%7.2f", paymentAmount);
      printf("%8.2f", loanAmount);
      break;
    }
    printf("%7.2f", paymentAmount);
    loanAmount -= paymentAmount;
    printf("%8.2f", loanAmount);


    printf("\n");
  }


  return 0;
}



int main(){

  /*
  printf("\nenter loan size: ");
  scanf("%f", &loanAmount);

  printf("enter payment amount: ");
  scanf("%f", &paymentAmount);

  printf("enter annual interest rate: ");
  scanf("%f", &annualInterestRate);
  */

  display();

  return 0;
}

