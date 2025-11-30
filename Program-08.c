/* This is a program to calculate the area of a circle based on the radius entered by the user.
This is the formula to calculate the area of a circle. [A = P * R * R] */

#include<stdio.h>
int main()
{
    int pai = 3.14159;

    int radius;
    printf("Enter the radius of a circle : ");
    scanf("%d",&radius);

    int area = pai * radius * radius;
    printf("The area of a circle is : %d",area);
    return 0;
}
