/* Program to slice a given string to desired length by creating a slice function */

#include <stdio.h>

int slice(char *st, int m, int n);
int main()
{
    char st[] = "Akash";
    slice(st, 1, 4);
    puts(st);
    return 0;
}

int slice(char *st, int m, int n)
{
    int i = 0;
    while ((i+m) < n)
    {
        st[i] = st[i + m];
        i++;
    }
    st[i] = '\0';
}