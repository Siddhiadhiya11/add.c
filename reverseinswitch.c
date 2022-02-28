#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int num,rev,d1,d2,d3,d4,d5,choice;
    while(1)
    {
        printf("Enter your choice:\n");
        printf("1. Enter 3 digit number:\n");
        printf("2. Enter 4 digit number:\n");
        printf("3. Enter 5 digit number:\n");
        printf("4. Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter a 3 digit number:");
            scanf("%d",&num);
            d3 = num%10;
            num = num/10;
            d2 = num%10;
            num = num/10;
            d1 = num%10;
            rev = d3*100 + d2*10 + d1*1;
            printf("The reverse number is %d\n",rev);
            break;
        case 2:
             printf("Enter a 4 digit number:");
             scanf("%d",&num);
             d4 = num%10;
             num = num/10;
             d3 = num%10;
             num = num/10;
             d2 = num%10;
             num = num/10;
             d1 = num%10;
             rev =  d4*1000 + d3*100 + d2*10 + d1*1;
             printf("The reverse number is %d\n",rev);
             break;
        case 3:
             printf("Enter a 5 digit number:");
             scanf("%d",&num);
             d5 = num%10;
             num = num/10;
             d4 = num%10;
             num = num/10;
             d3 = num%10;
             num = num/10;
             d2 = num%10;
             num = num/10;
             d1 = num%10;
             rev =  d5*10000 + d4*1000 + d3*100 + d2*10 + d1*1;
             printf("The reverse number is %d\n",rev);
             break;
        case 4:
            exit(0);
            break;
        default:
            printf("INVALID INPUT");
            break;
        }

    }
}