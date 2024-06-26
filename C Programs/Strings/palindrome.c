/* Program to check whether a given string is palindrome or not */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, flag = 0;
    char *ptr1, *ptr2;

    printf("Enter a string: ");
    gets(str);
    len = strlen(str);

    ptr1 = str;
    ptr2 = str + len - 1;
    // printf("%c\n", *ptr1);
    // printf("%c\n", *ptr2);

    while (ptr1 < ptr2)
    {
        if (*ptr1 != *ptr2)
        {
            flag = 1;
            break;
        }
        ptr1++;
        ptr2--;
    }

    // for (i = 0; i < len / 2; i++)
    // {
    //     if (str[i] != str[len - i - 1])
    //     {
    //         flag = 1;
    //         break;
    //     }
    // }

    if (flag == 0)
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);

    return 0;
}