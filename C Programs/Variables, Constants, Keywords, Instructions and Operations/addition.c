/* This program adds the 2 floating type numbers given by the user */

#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter the value of a\n");
    scanf("%f", &a);
    printf("Enter the value of b\n");
    scanf("%f", &b);
    printf("The sum od a and b is %f", a + b);
    return 0;
}