#include<stdio.h>
int main()
{
    int a,ld;
    printf("Enter a number: ");
    scanf("%d",&a);
    ld=a%10;
    printf("last digit of %d is %d",a,ld);
    getch();
}
