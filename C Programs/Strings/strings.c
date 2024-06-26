/* Initializing , scanning and printing a string */

#include <stdio.h>

int main()
{

    char str[50];
    printf("Enter the name to be printed : ");
    // scanf("%s", str);
    gets(str);

    // char str[] = "Akash";       // same as ---> *str="Akash";
    // char *ptr = str;            // same as --->  char *ptr = &str[0];

    // printf("%s", str);
    puts(str);

    // for (int i = 0; *ptr !='\0'; i++)
    // {
    //     printf("%c\n", str[i]);
    //     ptr++;
    // }

    // while (*ptr !='\0')
    // {
    //      printf("%c\n", *ptr);
    //      ptr++;
    // }

    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     printf("%c\n", str[i]);
    // }

    return 0;
}
