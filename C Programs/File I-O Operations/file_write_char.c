/* Program to write a string into a file in C */

#include <stdio.h>

int main()
{
    char str[50];
    FILE *f;
    f = fopen("fwrite.txt", "w");

    printf("Enter the text to print in file \n");
    gets(str);
    puts(str);

    fputs(str, f);

    fclose(f);

    return 0;
}