/* This program gives the area a rectangle by taking length and breadth as input by the user */ 

#include<stdio.h>

int main()
{
    printf("\nThis is the program to calculate area of rectangle...\n\n");

    float l, b;

    printf("Enter the length\n");
    scanf("%f", &l);

    printf("Enter the breadth\n");
    scanf("%f", &b);

    printf("Area of rectangle = %f \n", l * b);
    return 0;
}