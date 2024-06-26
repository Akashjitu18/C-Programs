/* This program converts the temperature in celcius to fahrenheit */ 

#include <stdio.h>

int main()
{
    float c;
    printf("\nEnter the temperature in Celcius to convert to Fahrenheit\n\n");
    scanf("%f", &c);
    float f = ((c * 9 / 5) + 32);
    printf("Fahrenheit value = %f\n", f);
    return 0;
}