#include<stdio.h>
int main()
{
    float p,n,r,si;
    int i=1;
    while(i<=3)
    {
        printf("enter p,n,r : ");
        scanf("%f%f%f",&p, &n, &r);
        si=p*n*r/100;
        printf("simple interest =%.2f\n",si);
        i++;
    }
return 0;
}