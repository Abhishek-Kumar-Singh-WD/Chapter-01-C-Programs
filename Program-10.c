/* This program calculates the cube of a number entered by the user.
This formula calculates the cube of a number. [C = N * N * N] */

#include<stdio.h>
int main()
{
    float number;
    printf("Enter a number : ");
    scanf("%f",&number);

    float cube = number * number * number;
    printf("The cube of a number is : %f",cube);
    return 0;
}
