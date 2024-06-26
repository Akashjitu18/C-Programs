/* Program to print every possibilities using pointers */

#include <stdio.h>

int main()
{


    // printf("The address of a is : %u\n\n", &a); // Prints address of the variable a

    int i = 18;
    int *j = &i;
    int **k = &j;

    printf("The address of i is : %u\n", &i);
    printf("The address of i is : %u\n", j);
    printf("The address of j is : %u\n", &j);
    printf("The value of i is : %d\n", i);                    
    printf("The value of i is : %d\n", *(&i));                // j holds address of i and *j gives the value of i
    printf("The value of i is : %d\n", *j);
    printf("The value of j is : %d\n", *(&j));                // value of j = address of i
    printf("The address of k is : %u\n", &k);
    printf("The value of k is : %d\n", k);                    // value of k = address of j
    printf("The address of i is : %u\n", *k);
    printf("The value of i is : %d\n", **k);



    // printf("The address of i is : %u\n", j);
    // printf("The address of j is : %u\n", &j);
    // printf("The value of i is : %d\n", *j);                    

    // j++;

    
    // printf("The address of i is : %u\n", j);
    // printf("The address of j is : %u\n", &j);
    // printf("The value of i is : %d\n", *j);   

   
}
