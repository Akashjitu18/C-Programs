/* Program to print star pattern */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        // for (int j = 1; j <= (2*i-1); j++)
        {
            printf("* ");
        }
        
        printf("\n");
    }

    return 0;
}