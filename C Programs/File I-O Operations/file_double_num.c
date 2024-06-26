/* Program to double the number present in a file */

#include <stdio.h>

int main()
{
    int n;
    FILE *ptr;
    ptr = fopen("number.txt", "r");
    fscanf(ptr, "%d", &n);
    n *= 2;
    ptr = fopen("number.txt", "w");
    fprintf(ptr, "%d", n);
    return 0;
}