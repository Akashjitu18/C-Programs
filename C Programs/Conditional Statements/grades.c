/* This program allocate the grade of student based on marks using if-elseif ladder and switch case statements */

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter the marks of the student\n");
    scanf("%d", &marks);


// 1st logic using if-elseif ladder

    // if (marks<0 || marks>100)
    // {
    //     printf("Invalid Entry...");
    // }
    // else if (marks>=90 && marks<=100)
    // {
    //     printf("Your grade is A");
    // }
    // else if (marks>=80 && marks<90)
    // {
    //     printf("Your grade is B");
    // }
    // else if (marks>=70 && marks<80)
    // {
    //     printf("Your grade is C");
    // }
    // else if (marks>=60 && marks<70)
    // {
    //     printf("Your grade is D");
    // }
    // else
    // {
    //     printf("You have Failed...!");
    // }


// 2nd logic using switch case and dividing the marks by 10

    // if (marks < 0 || marks > 100)
    // {
    //     printf("Invalid Entry...");
    // }
    // else
    // {
    //     switch (marks / 10)
    //     {
    //     case 10:
    //     case 9:
    //         printf("Your grade is A");
    //         break;
    //     case 8:
    //         printf("Your grade is B");
    //         break;
    //     case 7:
    //         printf("Your grade is C");
    //         break;
    //     case 6:
    //         printf("Your grade is D");
    //         break;

    //     default:
    //         printf("You are Failed..!");
    //         break;
    //     }
    // }


// 3rd approach by using range

    if (marks < 0 || marks > 100)
    {
        printf("Invalid Entry...");
    }
    else
    {
        switch (marks)
        {
        case 90 ... 100:
            printf("Your grade is A");
            break;
        case 80 ... 89:
            printf("Your grade is B");
            break;
        case 70 ... 79:
            printf("Your grade is C");
            break;
        case 60 ... 69:
            printf("Your grade is D");
            break;

        default:
            printf("You are Failed..!");
            break;
        }
    }

    return 0;
}