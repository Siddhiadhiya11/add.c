#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a and b :");
    scanf("%d%d",&a,&b);
    c = a;
    a = b;
    b = c;
    printf("after swapping a = %d\n",a);
    printf("after swapping b = %d\n",b);
    return 0;
}
