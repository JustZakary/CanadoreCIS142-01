// Lab 3 Program #2
// By Zakary Loney
// Oct 3rd, 2022
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    system("@cls||clear");
    int cpuScore = 0;
    int playerScore = 0;

    char runAgain = 'y';
    while (runAgain == 'y' || runAgain == 'Y')
    {
        srand(time(NULL));
        int diceOne = rand() % 8;
        int DiceTwo = rand() % 8;
        printf("You rolled a %d and a %d, that equals %d!\n", diceOne, DiceTwo, diceOne + DiceTwo);
        if (diceOne + DiceTwo == 9 || diceOne + DiceTwo == 15)
        {
            printf("You win!\n\n");
            playerScore++;
        }
        else
        {
            printf("You lose!\n\n");
            cpuScore++;
        }

        printf("Current Scores:\nCPU: %d Points\nPlayer: %d Points\nWould you like to play again?! (y/n):", cpuScore, playerScore);

        scanf(" %c", &runAgain);
        if (runAgain == 'n' || runAgain == 'N')
        {
            printf("Goodbye!");
        }
        else if (runAgain == 'y' || runAgain == 'Y')
        {
            system("@cls||clear");
        }
        else
        {
            printf("Invalid input, goodbye!");
            runAgain = 'n';
        }
    }
    return 0;
}