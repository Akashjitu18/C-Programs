/* This program gives the area a circle and volume of the cylinder by taking radius and height as input by the user */ 

#include <stdio.h>

int main()
{
    printf("\nThis is the program to calculate area of circle and volume of cylinder...\n\n");

    float r, h;
    float pi = 3.14;

    printf("Enter the Radius of circle\n");
    scanf("%f", &r);

    printf("Enter the Height of the cylinder\n");
    scanf("%f", &h);

    printf("Area of Circle = %f \n", pi * r * r);
    printf("Volume of Cylinder = %f \n", pi * r * r * h);
    return 0;
}