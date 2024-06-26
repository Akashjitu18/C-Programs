/* Program to find whether a given character is present in a string and if yes then its number of occurances */

#include <stdio.h>
#include <string.h>

int occurance(char *ptr, int n);
int present(char *ptr, int n);

int main()
{
    char st[50];
    char n;
    printf("Enter the the text : ");
    gets(st);
    printf("Enter the the character : ");
    scanf("%c", &n);
    // present(st, n);
    if (present(st, n) == 1)
    {
        printf("Number of times %c occured in text is %d", n, occurance(st, n));
    }
    else
        printf("%c is not present in the text\n", n);
    return 0;
}

int occurance(char *ptr, int n)
{
    int i = 0;
    while (*ptr != '\0')
    {
        if (*ptr == n)
        {
            i++;
        }
        ptr++;
    }
    return i;
}

int present(char *ptr, int n)
{
    while (*ptr != '\0')
    {
        if (*ptr == n)
        {
            printf("%c is present in the text\n", n);
            return 1;
        }

        ptr++;
    }
}