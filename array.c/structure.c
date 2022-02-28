#include<stdio.h>
int main()
{
    struct student 
    {
        int roll_no;
        char grade;
    };
    struct student s1 , s2;
    int roll_no;
    char grade;
    s1.roll_no = 11;
    s2.grade = 'A';
    printf("student roll no is %d\n",roll_no);
    printf("student grade is %c",grade);
    return 0;
}