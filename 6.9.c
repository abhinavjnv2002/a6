#include<stdio.h>
#include<conio.h>
int main()
{
    float i,u;
    printf("Enter the value in INR: ");
    scanf("%f",&i);
    u=(1/76.23)*i;
    printf("%f INR = %f USD",i,u);

    getch();
}
