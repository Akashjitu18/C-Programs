/* This program gives the divisiblity test without using conditional statements */ 


#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number \n");
    scanf("%d", &a);
    printf("divisibility test returns: %d\n", a % 97);
    printf("If the returned answer is 0 then the number is divisible by 97 else not divisible...\n");
    return 0;
}