/* Program to print first n numbers of fibonacci series */

#include <stdio.h>

int fib(int n);
int main()
{

    int n;

    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Fibonacci series is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",fib(i));
    }
    return 0;
}

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}




// #include <stdio.h>

// int main() {
//     int n, first = 0, second = 1, next, i;

//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series: ");

//     for (i = 0; i < n; i++) {
//         if (i <= 1)
//             next = i;
//         else {
//             next = first + second;
//             first = second;
//             second = next;
//         }
//         printf("%d ", next);
//     }

//     return 0;
// }
