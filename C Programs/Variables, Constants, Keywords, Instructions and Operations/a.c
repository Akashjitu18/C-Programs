/*  This program shows the order of printing in C */

#include <stdio.h>

int main()
{
    int a = 3;

    printf("%d %d %d\n", a, ++a, a++);
    
    return 0;
}