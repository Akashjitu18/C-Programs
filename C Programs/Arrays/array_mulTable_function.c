/* Program to print multiplication table using array by paassing it to a function */

#include <stdio.h>

int mulFunction(int mulTable[][2], int b);

int main()
{
    int a, b;
    printf("Enter the no of tables: ");
    scanf("%d", &a);
    int mulTable[a][2];

    for (int i = 0; i < a; i++)
    {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &mulTable[i][0]);
        printf("Enter the limit of table %d: ", i + 1);
        scanf("%d", &mulTable[i][1]);
    }

    mulFunction(mulTable, a);

    return 0;
}

int mulFunction(int mulTable[][2], int b)
{

    for (int i = 0; i < b; i++)
    {
        printf("\nThe table of %d \n", mulTable[i][0]);
        for (int j = 0; j < mulTable[i][1]; j++)
        {
            printf("%d X %d = %d \n", mulTable[i][0], j + 1, mulTable[i][0] * (j + 1));
        }
    }
}




// #include <stdio.h>

// // Function prototype
// void mulFunction(int num_tables, int table_info[][2]);

// int main() {
//     int num_tables;
//     printf("Enter the number of tables: ");
//     scanf("%d", &num_tables);

//     int table_info[num_tables][2]; // 2D array to store number and limit for each table

//     for (int i = 0; i < num_tables; i++) {
//         printf("Enter the number for table %d: ", i + 1);
//         scanf("%d", &table_info[i][0]); // Store the number for the table
//         printf("Enter the limit for table %d: ", i + 1);
//         scanf("%d", &table_info[i][1]); // Store the limit for the table
//     }

//     printf("\nMultiplication Tables:\n");
//     mulFunction(num_tables, table_info);

//     return 0;
// }

// void mulFunction(int num_tables, int table_info[][2]) {
//     for (int i = 0; i < num_tables; i++) {
//         printf("\nTable for %d:\n", table_info[i][0]); // Print the number for the table
//         for (int j = 1; j <= table_info[i][1]; j++) {
//             printf("%d X %d = %d\n", table_info[i][0], j, table_info[i][0] * j); // Print each multiplication
//         }
//         printf("\n");
//     }
// }
