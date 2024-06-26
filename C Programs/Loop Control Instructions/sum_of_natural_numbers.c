/* Program to print sum of first n natural numbers using conditional statements */

#include <stdio.h>

int main()
{
    int i, sum = 0, n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    while (i < n)
    {
        i++;
        sum += i;
        printf("%d\n", sum);   // gives first n Triangular numbers
    }

    // do
    // {
    //     i++;
    //     sum += i;
    // } while (i < n);

    // for (i = 0; i <= n; i++)
    // {
    //     sum += i;
    // }

    printf("The sum of first %d natural numbers : %d \n", n, sum);
    return 0;
}
