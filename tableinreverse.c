#include<stdio.h>
int main()
{
    int i = 10, num;
    printf("enter the value of num:");
    scanf("%d",&num);
    while (i>=1)
    {
        printf("%d * %d = %d\n", num, i, num*i);
        i--;
    } 
    return 0; 


}




