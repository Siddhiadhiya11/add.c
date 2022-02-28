/* area of circle  */
#include<stdio.h>
int main()
{
    float r, area;
    printf("enter the value radius:");
    scanf("%f",&r);
    area = 3.14*r*r;
    printf("Area of circle = %f",area);
    return 0;
}