/* Printing array elements in reverse order by passing it into a function */

#include <stdio.h>

int reverse(int a, int arr[]);
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the array elements %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    reverse(n, arr);
    return 0;
}

int reverse(int a, int arr[])
{
    for (int i = a - 1; i >= 0; i--)
    {
        printf("The element %d is %d\n", i + 1, arr[i]);
    }
}