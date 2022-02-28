#include<stdio.h>
float fun(float );
int main()
{
    float r, area;
    printf("Enter the value of r:");
    scanf("%f",&r);
    printf("The area of circle is %f",fun(r));
    return 0;
}
float fun(float r)
{
  float area;
  area = 3.14 * r * r;
  return (area);
}