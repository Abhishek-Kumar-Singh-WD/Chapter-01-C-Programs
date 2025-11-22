/* This program calculates the cube of a number entered by the user.
This formula calculates the cube of a number. [C = N * N * N] */

#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);

    int cube = number * number * number;
    printf("The cube of a number is : %d",cube);
    return 0;
}
