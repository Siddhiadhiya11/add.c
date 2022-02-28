#include<stdio.h>
int main()
{
    float km,cm,inch,feet;
    double m;
    printf("Enter the value of km:");
    scanf("%f",&km);
    m = 1000*km;
    cm = 100*m;
    inch = cm/2.54;
    feet = inch/12;
    printf("distance in m = %lf\n",m);
    printf("distance in cm = %f\n",cm);
    printf("distance in inch = %f\n",inch);
    printf("distance in feet = %f",feet);
    return 0;
}