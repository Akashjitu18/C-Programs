/* Program to calculate sum of first n natural numbers using recursive function */

#include <stdio.h>

int cal_sum(int n);

int main()
{
    int i, n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    printf("The sum of first %d natural numbers : %d \n", n, cal_sum(n));
    return 0;
}

int cal_sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + cal_sum(n-1);
    }
}