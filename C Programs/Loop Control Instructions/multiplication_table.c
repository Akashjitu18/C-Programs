/* Program to print the multipliacation of a given number */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the valuen of n : ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf(" %d x %d = %d\n", n, i, i * n);
    }

    return 0;
}