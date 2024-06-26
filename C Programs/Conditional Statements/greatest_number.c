/* This program returns the greatest of the 4 numbers given by user using if-elseif ladder */

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter any 4 numbers\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
    {
        printf("The greatest number is %d", a);
    }
    else if (b > c && b > d)
    {
        printf("The greatest number is %d", b);
    }
    else if (c > d)
    {
        printf("The greatest number is %d", c);
    }
    else
    {
        printf("The greatest number is %d", d);
    }

    return 0;
}