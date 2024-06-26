/* Program to encrypt and decrypt a given string */

#include <stdio.h>
#include <string.h>

int encrypt(char *st);
int decrypt(char *st);
int main()
{
    char st[50];
    printf("Enter the the text : ");
    gets(st);
    encrypt(st);
    printf("Encrypted text is : ");
    puts(st);
    decrypt(st);
    printf("decryptrd text is : ");
    puts(st);
    return 0;
}

int encrypt(char *st)
{
    char *ptr = st;
    int i = 0;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int decrypt(char *st)
{
    char *ptr = st;
    int i = 0;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
