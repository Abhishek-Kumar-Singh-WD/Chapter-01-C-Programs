/* This is a program to calculate the area of a square based on the side entered by the user.
This is the formula to calculate the area of a square. [A = S * S] */

#include<stdio.h>
int main()
{
    int side;
    printf("Enter the side of a square : ");
    scanf("%d",&side);

    int area = side * side;
    printf("The area of a square is : %d",area);
    return 0;
}
