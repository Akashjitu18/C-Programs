/* Program to initialize a multidimentional array give input and print the values*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the no of students: ");
    scanf("%d", &a);
    printf("Enter the no of subjects: ");
    scanf("%d", &b);

    int marks[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the marks of the student %d in subject %d : ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("T marks of the student %d in subject %d is %d  \n", i + 1, j + 1, marks[i][j]);
        }
    }

    return 0;
}