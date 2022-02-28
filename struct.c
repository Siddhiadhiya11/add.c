#include<stdio.h>
int main()
{
    struct book
    {
        char name;
        float prices;
        int pages;
    };
    struct book b1,b2,b3;
    printf("Enter names, prices and no. of pages of 3 books : ");
    scanf("%c%f%d",&b1.name,&b1.prices,&b1.pages);
    scanf("%c%f%d",&b2.name,&b2.prices,&b2.pages);
    scanf("%c%f%d",&b3.name,&b3.prices,&b3.pages);
    printf("And this is what you entered\n");
    printf("%c %f %d",b1.name,b1.prices,b1.pages);
    printf("%c %f %d",b2.name,b2.prices,b2.pages);
    printf("%c %f %d",b3.name,b3.prices,b3.pages);
    return 0;
}