/* This program gives the result pass or fail based on marks using if else condition */

#include <stdio.h>

int main()
{
    int sub1, sub2, sub3;
    float total;
    printf("Enter the Marks of subject 1 : ");
    scanf("%d", &sub1);
    printf("Enter the Marks of subject 2 : ");
    scanf("%d", &sub2);
    printf("Enter the Marks of subject 3 : ");
    scanf("%d", &sub3);

    total = (sub1 + sub2 + sub3) / 3;

    if (total >= 40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33)
    {
        printf("Pass..!\n");
        printf("Your total percentage is %f", total);
    }
    else
    {
        printf("Fail..!\n");
        printf("Your total percentage is %f", total);
    }

    return 0;
}