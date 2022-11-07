// Lab 3 Program #1
// By Zakary Loney
// Oct 3rd, 2022
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char runAgain = 'y';
    while (runAgain == 'y' || runAgain == 'Y')
    {
        printf("Ask me anything... then press \"Q\" for an answer: ");
        char input;
        scanf(" %c", &input);
        if (input == 'Q' || input == 'q')
        {
            printf("\n");
            srand(time(NULL));
            int random = rand() % 8;
            if (random == 0)
            {
                printf("Yes");
            }
            else if (random == 1)
            {
                printf("No");
            }
            else if (random == 2)
            {
                printf("Maybe");
            }
            else if (random == 3)
            {
                printf("Ask again later");
            }
            else if (random == 4)
            {
                printf("I don't know");
            }
            else if (random == 5)
            {
                printf("I don't think so");
            }
            else if (random == 6)
            {
                printf("I think so");
            }
            else if (random == 7)
            {
                printf("I don't care");
            }
            else
            {
                printf("Error");
            }

            printf("\n\nWould you like to play agin? (y/n): ");
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
            }
        }
        else
        {
            printf("\nYou didn't press \"Q\" or \"q\". Please try again.\n\n");
        }
    }
    return 0;
}