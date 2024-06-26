/* Write a program that generates a random number and asks the player to guess it. 
If the player’s guess is higher than the actual number, the program displays “Lower number please.” 
Similarly, if the user’s guess is too low, the program prints “Higher number please.”
When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.
Hints:
Use loops
Use a random number generator.*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int input, num;
    srand(time(0));
    num = rand() % 100 + 1;
    // printf("%d\n", num);

    printf("Guess the number between 1 to 100..?\n");

    for (int i = 0; i < 999; i++)
    {

        scanf("%d", &input);

        if (input == num)
        {
            printf("Hurray your guess is correct..! %d\n",num);
            printf("The number of guesses is %d\n", i+1);
            break;
        }

        else if (input > num)
        {
            printf("Smaller number please\n");
        }
        else if (input < num)
        {
            printf("Larger number please\n");
        }
    }

    return 0;
}