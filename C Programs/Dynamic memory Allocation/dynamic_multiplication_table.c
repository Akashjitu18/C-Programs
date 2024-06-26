/* Program to print multiplication table by allocating dynamic memory in C */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;

    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("The multiplication Table of %d \n", n);

    ptr = (int *)calloc(10, sizeof(int));

    for (int i = 0; i < 10; i++)
    {

        printf("%d x %d = %d\n", n, i + 1, n * (i + 1));
    }

    printf("\n");

    ptr = realloc(ptr, 15 * sizeof(int));

    for (int i = 0; i < 15; i++)
    {

        printf("%d x %d = %d\n", n, i + 1, n * (i + 1));
    }

    return 0;
}