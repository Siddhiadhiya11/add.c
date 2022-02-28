/*celsius to fahrenheit*/
#include<stdio.h>
int main ()
{
    float c, f; 
    printf("the value of celsius:");
    scanf("%f",&c);
    f = (c*1.8)+32;
    printf("Temprature in fahrenheit = %f", f);
    return 0;
}
