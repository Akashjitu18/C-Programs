/* Programs that uses call by reference method */

#include <stdio.h>

// int tentimes(int *b);
// int main()
// {
//     int a;                                              // to change the number to ten times 
//     printf("Enter the value of a : ");
//     scanf("%d", &a);
//     printf("10 times a = %d", tentimes(&a));

//     return 0;
// }

// int tentimes(int *b)
// {
//     return *b * 10;
// }



// int sum(int *x, int *y);
// float average(int *i, int *j);
// int main()
// {
//     int a, b;
//     printf("Enter the value of a : ");                        // sum and avg of 2 numbers using in diff functions
//     scanf("%d", &a);
//     printf("Enter the value of b : ");
//     scanf("%d", &b);
//     printf("The sum is %d\n", sum(&a, &b));
//     printf("The average is %.2f\n", average(&a, &b));

//     return 0;
// }

// int sum(int *x, int *y)
// {
//     return *x + *y;
// }

// float average(int *i, int *j)
// {
//     return ((float)(*i + *j) / 2);
// }



int sumandavg(int i, int j, int *sum, float *avg);
int main()
{
    int a, b, sum;
    float avg;
    printf("Enter the value of a : ");
    scanf("%d", &a);                                                                  //sum and avg of 2 numbers in same function
    printf("Enter the value of b : ");
    scanf("%d", &b);

    sumandavg(a, b, &sum, &avg);                                             
    printf("The sum and avg of %d and %d is %d and %.2f", a, b, sum, avg);

    return 0;
}

int sumandavg(int i, int j, int *sum, float *avg)
{
    *sum = i + j;
    *avg = (float)(*sum )/ 2;
}