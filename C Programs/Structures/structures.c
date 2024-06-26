/* Program to Create, initialize, take input and print the contents of a Structure in C */

#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    char name[20];
    float salary;
} emp;

void show(emp e[], int n);

int main()
{
    int n;
    printf("Enter the number of Emloyees : ");
    scanf("%d", &n);
    emp e[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of employee %d\n", i + 1);
        printf("code : ");
        scanf("%d", &e[i].code);
        printf("name : ");
        scanf("%s", e[i].name);
        printf("salary : ");
        scanf("%f", &e[i].salary);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The details of employee %d \n", i+1);
    //     printf("code : %d\n", e[i].code);
    //     printf("name : %s\n", e[i].name);
    //     printf("salary : %.2f\n", e[i].salary);
    // }

    show(e, n);

    return 0;
}

void show(emp e[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The details of employee %d \n", i + 1);
        printf("code : %d\n", e[i].code);
        printf("name : %s\n", e[i].name);
        printf("salary : %.2f\n", e[i].salary);
    }
}