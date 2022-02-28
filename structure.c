#include<stdio.h>
int main()
{
    struct student
    {
        int rollno;
        char grade;
    };

    struct student st1,st2;
    scanf("%d",&st1.rollno);
    printf("%d",st1.rollno);

    return 0;
}