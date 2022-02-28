#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter your full name :");
    gets(name);//scanf 
    printf("Hi ");
    puts(name);//printf
    return 0;
}