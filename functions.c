#include<stdio.h>
void addition();
void subtraction();
void multiply();
void division();
void mod();

int main()
{
    addition();
    subtraction();
    multiply();
    division();
    mod();

    return 0;
}
 void addition()
 {
     int a, b;
     printf("enter two numbers:");
     scanf("%d%d",&a,&b);
     printf("%d + %d = %d",a,b,a+b);
 }

 void subtraction()
 {
     int a, b;
     printf("Enter two numbers");
     scanf("%d%d",&a,&b);
     printf("%d - %d = %d",a,b,a-b);
 }

 void multiply()
 {
     int a, b;
     printf("Enter two numbers");
     scanf("%d%d",&a,&b);
     printf("%d * %d = %d",a,b,a*b);
 }

 void division()
{
    int a, b;
     printf("Enter two numbers");
     scanf("%d%d",&a,&b);
     printf("%d/%d = %d",a,b,a/b);
}

void mod()
{
    int a, b, mod;
     printf("Enter two numbers");
     scanf("%d%d",&a,&b);
     mod = a%b;
     printf("mod of numbers is %d",mod);
}