/* Program that uses call by value method */

#include <stdio.h>

int address(int j);
int main()
{
    int i;
    printf("The address of i is : %u\n", &i);

    printf("The address of i is : %u", address(i));

    return 0;
}

int address(int j)
{
    return &j;
}