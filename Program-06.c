/* This program calculates the sum of two numbers entered by the user.
This formula calculates the sum of two numbers. [S = N1 + N2] */

#include<stdio.h>
int main()
{
    int number1;
    printf("Enter the first number : ");
    scanf("%d",&number1);

    int number2;
    printf("Enter the second number : ");
    scanf("%d",&number2);

    int sum = number1 + number2;
    printf("The sum of two numbers is : %d",sum);
    return 0;
}
