/* Program to take input of real and imaginary co-efficients of 5 complex numbers and print then in C */

#include <stdio.h>

typedef struct complex
{
    int real;
    int ima;

} comp;

int display(comp *c);
int main()
{
    comp c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Complex number %d\n", i + 1);
        printf("Real coeff : ");
        scanf("%d", &c[i].real);
        printf("Imaginary coeff : ");
        scanf("%d", &c[i].ima);
    }

    display(c);

    return 0;
}

int display(comp *c)
{
    for (int i = 0; i < 5; i++)
    {
        printf("\nComplex number %d\n", i + 1);
        printf("Real coeff : %d  ", c[i].real);
        printf("Imaginary coeff : %d", c[i].ima);
    }
}