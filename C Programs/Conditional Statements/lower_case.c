/* This program checks whether the given character is in lower case or not using if else condition */

#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character\n");
    scanf("%c", &a);
    if ( a >= 97 &&  a <= 122)   //ascii value of a-z is 97-122
    {
        printf("Entered character is in lower case");
    }
    else
    {
        printf("Entered character is not in lower case");
    }

    return 0;
}