/* Snake, Water, Gun or Rock, Paper, Scissors is a game most of us have played during school time.
Write a C program capable of playing this game with you.
Your program should be able to print the result after you choose Snake/Water or Gun.*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char r[] = "Rock";
    char p[] = "Paper";
    char s[] = "Scissor";

    char c[20];
    char u[20];
    int c_choice;
    int u_choice;

    srand(time(0));
    c_choice = rand() % 3;

    switch (c_choice)
    {
    case 0:
        strcpy(c, r);
        break;
    case 1:
        strcpy(c, p);
        break;
    case 2:
        strcpy(c, s);
        break;
    }

    // printf("%s\n", c);

    printf("\nLet's play Rock,Paper and Scissor Game\n\n");

    printf("Select your object... \n");
    printf("1. Rock\n2. Paper\n3. Scissor\n");
    printf("Choose option : ");

    scanf("%d", &u_choice);

    switch (u_choice)
    {
    case 1:
        strcpy(u, r);
        break;
    case 2:
        strcpy(u, p);
        break;
    case 3:
        strcpy(u, s);
        break;
    }

    printf("\nYour choice : %s\n", u);
    printf("Computer choice : %s\n", c);

    if (strcmp(c, u) == 0)
    {
        printf("It's a Draw..! Play Again\n");
    }
    
    else if (c_choice == 0 && u_choice == 2)
    {
        printf("You Win..!\n");
    }
    else if (c_choice == 0 && u_choice == 3)
    {
        printf("You Lose..!\n");
    }
    else if (c_choice == 1 && u_choice == 3)
    {
        printf("You Lose..!\n");
    }
    else if (c_choice == 1 && u_choice == 1)
    {
        printf("You Win..!\n");
    }
        else if (c_choice == 2 && u_choice == 1)
    {
        printf("You Win..!\n");
    }
        else if (c_choice == 2 && u_choice == 2)
    {
        printf("You LOse..!\n");
    }
    
    printf("\n");
    return 0;
}