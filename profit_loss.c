#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter age of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
     if(a>c){
         printf("enter a is eldest");
         }
     else{
         printf("c is eldest");
         }
    }
    else
    {
        if(b>c){
            printf("b is the eldest");
        }
        else{
            printf("c is the eldest");
        }

    }
return 0;
}