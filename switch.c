#include<stdio.h>
#include<stdlib.h>
int main()
{
    float num1,num2;
    int choice;
    {
    printf("choose option:\n");
    printf("1. Addition:\n");
    printf("2. Subtraction:\n");
    printf("3. multiplication:\n");
    printf("4. division:\n");
    printf("5. Exit\n");
    scanf("%d",&choice);
    switch(choice)
     {
         case 1:
             printf("Enter two numbers:");
             scanf("%f%f",&num1,&num2);
             printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
             break;
        case 2:
             printf("Enter two numbers:");
             scanf("%f%f",&num1,&num2);
             printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
             break;
        case 3:
             printf("Enter two numbers:");
             scanf("%f%f",&num1,&num2);
             printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
             break;
        case 4:
             printf("Enter two numbers:");
             scanf("%f%f",&num1,&num2);
             printf("%.2f/%.2f = %.2f", num1, num2, num1/num2);
             break;
       case 5:
             exit(0);
             break;
        default:
             printf("Invalid input");

     }
    }
     return 0;
      


}