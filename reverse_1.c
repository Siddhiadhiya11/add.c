#include<stdio.h>
int main ()
{
int num,rev,d1,d2,d3;
printf("Enter a 3 digit number:");
scanf("%d",&num);
d3 = num%10;//2
num = num/10;//14
d2 = num%10;//4
num = num/10;//1
d1 = num%10;
rev = d3*100 + d2*10 + d1*1;
printf("The reverse number is %d\n",rev);
}