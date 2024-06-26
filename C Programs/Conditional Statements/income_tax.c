/* This program calculates the income tax to be payed based on income using if condition */

#include <stdio.h>

int main()
{
    float tax, income;
    printf("Enter your income\n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income > 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.20 * (income - 500000);
    }
    if (income > 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.20 * (1000000 - 500000) + 0.30 * (income - 1000000);
    }

    printf("Income tax to be payed is %f\n", tax);

    return 0;
}