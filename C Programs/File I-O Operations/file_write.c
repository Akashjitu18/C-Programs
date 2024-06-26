/* Program to write into a file in C */


#include <stdio.h>

int main()
{
    int n;

    FILE *ptr;
    ptr = fopen("numbers.txt", "w");

    printf("Enter the value of n : ");
    scanf("%d", &n);

    // fprintf(ptr, "These are the first %d natural numbers \n", n);

    // for (int i = 1; i <= n; i++)
    // {                                                                             // to print first n natural numbers
    //     printf("%d\n", i);
    //     fprintf(ptr, "%d\n", i);
    // }

    fprintf(ptr, "The multiplication table of %d \n\n", n);

    for (int i = 1; i <= 10; i++)
    {                                                                                 // to print multiplication table of n
        printf(" %d x %d = %d\n", n, i, i * n);
        fprintf(ptr, " %d x %d = %d\n", n, i, i * n);
    }

    fclose(ptr);

    return 0;
}