/* Program to read a file having characters and print the contents of it */

// #include <stdio.h>

// int main()
// {
//     FILE *f;
//     f = fopen("read.txt", "r");
//     char c;

//     if (
//         f == NULL)
//     {
//         printf("File doesn't exits");
//     }
//     else

//         for (c = fgetc(f); c != EOF; c = fgetc(f))
//         {
//             printf("%c", c);
//         }

//     fclose(f);

//     return 0;
// }



#include <stdio.h>

int main()
{
    FILE *r, *w;
    r = fopen("read.txt", "r");
    w = fopen("write.txt", "w");
    char c;
    char str[50];

    for (c = fgetc(r); c != EOF; c = fgetc(r))
    {

        fputc(c,w);
    }

    fclose(r);
    fclose(w);

    return 0;
}