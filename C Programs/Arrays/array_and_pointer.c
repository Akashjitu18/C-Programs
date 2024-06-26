/* Adding a pointer to an Array */

// #include <stdio.h>

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int *ptr = &arr[0];

//     for (int i = 0; i < 10; i+=2)
//     {
//         printf("The pointer points towards the element %d of array is %d\n", i + 1, arr[i]);
//         ptr += 2;
//     }

//     return 0;
// }



#include <stdio.h>

int main()
{
    int arr[10];
    int *ptr = &arr[0];
    ptr += 2;

    if (ptr == &arr[2])
    {
        printf("The pointer is pointing towards the address 3rd element of the array\n");
    }
    else

        return 0;
}
