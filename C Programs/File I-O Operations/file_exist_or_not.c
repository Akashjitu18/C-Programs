/* Program to check whether the given file exists or not using file i/o operations in C */

#include <stdio.h>

int main()
{
    char fname[50];
    FILE *ptr;
    printf("Enter the file name to be found...\n");
    gets(fname);
    ptr = fopen(fname, "r");
    if (
        ptr == NULL)
    {
        printf("File doesn't exits");
    }
    else
        printf("File exists");

    return 0;
}