#include<stdio.h>
int main()
{
    int a,md;
    printf("Enter a three digit number: ");
    scanf("%d",&a);
    md=a/10%10;
    printf("middle digit of %d is %d",a,md);
    getch();
}
