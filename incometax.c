#include <stdio.h>
int main ()
{
    float income, tax;
    printf("enter the value of income :");
    scanf("%f", &income);
    if (income <= 250000 && income >= 500000)
      tax = income*0.05 ;
    else if (income < 500000 && income >= 100000)
      tax = income*0.2;
    else if (income > 1000000)
      tax = income*0.3;
    else 
      tax = 0;
    printf(" the tax paid by the employee is %0.2f",tax);
    return 0;
    
    
    }