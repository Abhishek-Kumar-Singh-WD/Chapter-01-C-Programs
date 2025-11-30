/* This is a program to calculate the area of a square based on the side entered by the user.
This is the formula to calculate the area of a square. [A = S * S] */

#include<stdio.h>
int main()
{
    float side;
    printf("Enter the side of a square : ");
    scanf("%f",&side);

    float area = side * side;
    printf("The area of a square is : %f",area);
    return 0;
}
