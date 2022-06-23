#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a number: ");
    scanf("%d",&a);
    b=a-(a%10);
    printf("required number is %d",b);
    getch();
}
