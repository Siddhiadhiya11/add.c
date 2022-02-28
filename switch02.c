#include<stdio.h>
int main()
{
    int num,fact=1,i=1,choice,a,b,c; 
    printf("choose the option:\n");
    printf("1. Factorail value:\n");
    printf("2. Armstrong number:\n");
    printf("3. Even or odd no.:\n");
    printf("4. Prime no:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: 
            printf("Enter a number");
            scanf("%d",&num); 
            while(i<=num)
            {
                fact = fact*i;
                i++;
            }
            printf("Factorial value  of %d = %d",num,fact);
            break;
        case 2:
             printf("Enter a number:");
             scanf("%d",&i);
             while(i<=500)
             a = i%10;
             b = i%100;
             b = (b-a)/10;
             c = i/100;
             if("(a*a*a)+(b*b*b)+(c*c*c)==i")
             printf("%d",i);
             break;
        case 3:
             printf("Enter a number:");
             scanf("%d",&num);
             if(num%2==0)
               printf("The number is even");
             else if(num%2!=0)
               printf("The number is odd");
             else 
               printf("The number is neither even nor odd");
            break;
        case 4:
             printf("Enter the number:");
             scanf("%d",&num);
             for(i=1; i<=num+1; i++);
             {
               if(num%i==0)
               {
                printf("Number is not a Prime number");
                break;
               }
               else if (i==num)
               {
                   printf("Number is a Prime number");
               }
             }
             break;
        default:
             printf("Invalid Input");
        

    }
    return 0; 
}