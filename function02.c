#include<stdio.h>
int fun(int a, int b);
int main()
{
    int x,y,z;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    z = fun(x,y);
    printf("%d + %d = %d", x, y, z);
    return 0;
}
int fun(int a, int b)
{
    int add;
    add = a + b;
    return add;
}
