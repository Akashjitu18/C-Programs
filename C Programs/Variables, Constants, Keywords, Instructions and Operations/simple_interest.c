/* This program is used to calculate the simple interest */ 

#include <stdio.h>

int main()
{
    float p, t, r;
    printf("\nEnter the Principle amount\n");
    scanf("%f", &p);
    printf("Enter the Time period\n");
    scanf("%f", &t);
    printf("Enter the Rate of interest\n");
    scanf("%f", &r);

    printf("Simple interest for the amount is %f", (p * t * r) / 100);
    return 0;
}