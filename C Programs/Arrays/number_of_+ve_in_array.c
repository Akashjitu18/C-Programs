/* Program to get the number of positive elements in an array */

#include <stdio.h>

int main()
{
    int arr[] = {3, -6, 78, -65, -77, 54, 7, 44, 66, -44};
    int *ptr = arr;
    int pos;
    for (int i = 0; i < 10; i++)
    {
        if (*ptr > 0)
        {
            pos++;
        }

        ptr++;
    }
    printf("The number of positive elemets are %d\n", pos);
    return 0;
}