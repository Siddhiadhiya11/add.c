#include<stdio.h>
int main()
{
    int cp,sp,p,l;
    printf("enter the selling price");
    scanf("%d",&sp);
    printf("enter the cost price");
    scanf("%d",&cp);
    p=sp-cp;
    l=cp-sp;
    if(p<0)
    printf("he made a loss of rs %d",l);
    else if(p>0)
    printf("he made a profit os rs %d",p);
    else if (p==0)
    printf("he neither made a loss nor profit");
    return 0;

}