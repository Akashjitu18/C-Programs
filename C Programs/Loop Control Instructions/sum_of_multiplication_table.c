/* Program to calculate sum of a multiplication table */

#include <stdio.h>

int main()
{
    int n, sum;
    printf("Enter the valuen of n : ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        sum += (i * n);
        printf(" %d x %d = %d\n", n, i, i * n);
    }
    printf("\nSum of the multiplication table is %d \n", sum);
    return 0;
}