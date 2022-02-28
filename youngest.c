#include<stdio.h>
int main()
{
    int dia, tanu,siddhi, eldest;
    printf("enter the age of dia,tanu and siddhi : ");
    scanf("%d%d%d",&dia,&tanu,&siddhi); 
    if(tanu>dia)
    {
        if(tanu>siddhi)
        printf("tanu is the eldest");
        else
        printf("siddhi is the eldest");
    }
    else 
    {
         if(dia>siddhi)
         printf("dia is the eldest");
         else
         printf("siddhi is the eldest");
    }

       return 0;
            
    }
    