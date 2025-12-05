/* This program calculates the sum of two numbers entered by the user.
This formula calculates the sum of two numbers. [S = N1 + N2] */

#include<stdio.h>
int main()
{
    float number1;
    printf("Enter the first number : ");
    scanf("%f",&number1);

    float number2;
    printf("Enter the second number : ");
    scanf("%f",&number2);

    float sum = number1 + number2;
    printf("The sum of two numbers is : %f",sum);
    return 0;
}
