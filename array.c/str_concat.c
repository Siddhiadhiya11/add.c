#include<stdio.h>
#include<string.h>
int main()
{
    char source[] = "Siddhi ", target[] = "Hello, ";
    strcat(target,source);
    printf("source string = %s\n",source);
    printf("target string = %s",target);
    return 0;
}