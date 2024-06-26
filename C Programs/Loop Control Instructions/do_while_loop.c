/* Program to print first n natural numbers using do-while loop */

#include <stdio.h>

int main()
{
    int a = 1, b;
    printf("Enter the no of natural no to be printed : ");
    scanf("%d", &b);
    do
    {
        printf("%d\n", a++);

    } while (a <= b);

    return 0;
}