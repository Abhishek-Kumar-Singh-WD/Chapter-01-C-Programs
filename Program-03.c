/* This is a program to calculate the area of a circle based on the radius entered by the user.
This is the formula to calculate the area of a circle. [A = P * R * R] */

#include<stdio.h>
int main()
{
    float pai = 3.14159;

    float radius;
    printf("Enter the radius of a circle : ");
    scanf("%f",&radius);

    float area = pai * radius * radius;
    printf("The area of a circle is : %f",area);
    return 0;
}
