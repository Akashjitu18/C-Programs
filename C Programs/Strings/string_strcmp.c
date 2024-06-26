/* Program to compare the 2 strings that one is scanned fully and other character by character */

#include <stdio.h>
#include <string.h>

int main()
{
    char st1[50];
    char st2[50];
    char c;
    int i = 0;

    printf("Enter st1 : ");
    scanf("%s", st1);
    printf("Enter st2 : \n");

    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i] = '\0';

    printf("s1 : %s\n", st1);
    printf("s2 : %s\n", st2);

    // puts(s1);
    // puts(s2);
    printf("%d", strcmp(st1, st2));

    return 0;
}