/* Program to know which date comes earlier between given 2 dats by using sturctures in C */

#include <stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;

} date;

void display(date d);
int compare(date d1, date d2);
int main()
{
    date d1, d2;

    printf("Enter the date 1 \n");
    printf("Date : ");
    scanf("%d", &d1.date);
    printf("Month : ");
    scanf("%d", &d1.month);
    printf("Year : ");
    scanf("%d", &d1.year);

    printf("Enter the date 2 \n");
    printf("Date : ");
    scanf("%d", &d2.date);
    printf("Month : ");
    scanf("%d", &d2.month);
    printf("Year : ");
    scanf("%d", &d2.year);

    display(d1);
    display(d2);
    int c = compare(d1, d2);
    if (c == 1)
    {
        printf("Date 2 is Earlier\n");
    }
    else if (c == -1)
    {
        printf("Date 1 is Earlier\n");
    }
    else
    {
        printf("It's the same day bruhhh\n");
    }

    return 0;
}

void display(date d)
{
    printf("%d/%d/%d\n", d.date, d.month, d.year);
}

int compare(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }
    return 0;
}