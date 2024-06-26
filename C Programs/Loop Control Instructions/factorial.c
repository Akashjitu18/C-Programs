/* Program to find factorial of a given number */

#include <stdio.h>

int main()
{
    int n, fact = 1;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    // for (int i = n; i > 0; i--)
    {
        fact *= i;
    }
    printf("The factorial od %d is : %d", n, fact);
    return 0;
}