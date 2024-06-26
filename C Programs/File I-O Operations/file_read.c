/* Program to read a file numbers having and print the contents of it */

#include <stdio.h>

int main()
{
    int num[999];
    FILE *ptr;
    ptr = fopen("sample.txt", "r");
    if (
        ptr == NULL)
    {
        printf("File doesn't exits");
    }
    else

        // for (int i = 0; ptr != EOF; i++)           // wrong I did
        // {
        //     fscanf(ptr, "%d", &num[i]);
        // }
        // for (int i = 0; ptr != EOF; i++)
        // {
        //     printf("%d", num[i]);
        // }

        for (int i = 0; fscanf(ptr, "%d", &num[i]) != EOF; i++)
        {
            printf("%d\n", num[i]);
        }

    fclose(ptr);

    return 0;
}