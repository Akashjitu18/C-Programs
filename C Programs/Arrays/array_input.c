/* Program for Initializing and giving input to array */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no of students: ");
    scanf("%d", &n);

    int marks[n];
    // int *ptr;
    // ptr = &marks[0];
    // ptr = marks;

        for (int i = 0; i < n; i++)
    {
        printf("Enter the marks of the student %d : ", i + 1);
        scanf("%d", &marks[i]);
        // ptr++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("The marks of student %d is %d\n", i + 1, marks[i]);
    }

    return 0;
}