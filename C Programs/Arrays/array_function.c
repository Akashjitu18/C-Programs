/* Displaying the array elemets by passing it to a function */

#include <stdio.h>

int display(int x, int y, int arr[x][y]);

int main()
{
    int a, b;
    printf("Enter the no of rows : ");
    scanf("%d", &a);
    printf("Enter the no of columns : ");
    scanf("%d", &b);

    int arr[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the row %d element %d : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    display(a, b, arr);

    return 0;
}

int display(int x, int y, int arr[x][y])
{

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Row %d element %d is %d \n", i + 1, j + 1, arr[i][j]);
        }
    }
}