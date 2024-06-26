/* Program to write details of 2 employees into a file in C */

#include <stdio.h>

typedef struct file_employee
{
    char name[20];
    int salary;
} emp;

int main()
{
    emp e1, e2;

    printf("Enter the details of Employee 1\n");
    printf("Name : ");
    scanf("%s", e1.name);
    printf("Salary : ");
    scanf("%d", &e1.salary);

    printf("Enter the details of Employee 2\n");
    printf("Name : ");
    scanf("%s", e2.name);
    printf("Salary : ");
    scanf("%d", &e2.salary);

    FILE *ptr;
    ptr = fopen("employee.txt", "w");

    fprintf(ptr, "%s, ", e1.name);
    // fputs(e1.name, ptr);
    fprintf(ptr, "%d\n", e1.salary);

    fprintf(ptr, "%s, ", e2.name);
    // fputs(e2.name, ptr);
    fprintf(ptr, "%d\n", e2.salary);

    return 0;
}