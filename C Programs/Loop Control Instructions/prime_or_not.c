/* Program to check whether a given number is prime or not */

#include <stdio.h>

int main()
{
    int n, prime = 1;
    printf("Enter any number : ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (prime == 0)
    {
        printf("%d is not a prime number...\n", n);
    }

    else if (n < 2)
    {
        printf("%d is neither prime not composite number...", n);
    }

    else
    {
        printf("%d is a prime number...\n", n);
    }

    return 0;
}