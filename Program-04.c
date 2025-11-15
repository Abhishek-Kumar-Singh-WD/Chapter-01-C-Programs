/* This program calculates the perimeter of a rectangle using the length and breadth entered by the user.
This formula calculates the perimeter of a rectangle. [P = (L + B) * 2] */

#include<stdio.h>
int main()
{
    int length;
    printf("Enter the length of a rectangle : ");
    scanf("%d",&length);

    int breadth;
    printf("Enter the breadth of a rectangle : ");
    scanf("%d",&breadth);

    int perimeter = (length + breadth) * 2;
    printf("The perimeter of a rectangle is : %d",perimeter);
    return 0;
}
