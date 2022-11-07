// Lab 5
// By Zakary Loney
// Monday, November 7, 2022

#include <stdio.h>

// Function Prototypes
int arrayLength(char name[]);

int main(void)
{
    char replay = 'y';

    do
    {
        char name[255];

        printf("\n\nEnter your name: ");
        scanf(" %s", &name);

        const int length = arrayLength(name);
        for (int i = length; i >= 0; i--)
        {
            if (i == 0 || i == length)
            {
                printf("%c", name[i]);
            }
            else
            {
                printf("%c * ", name[i]);
            }
        }

        int valid = 0;
        do
        {
            printf("\nWould you like to play again? (y/n): ");
            scanf(" %c", &replay);
            if (replay == 'y' || replay == 'Y')
            {
                printf("\n\n");
                valid = 1;
            }
            else if (replay == 'n' || replay == 'N')
            {
                printf("\n\nGoodbye!\n\n");
                valid = 1;
            }
            else
            {
                printf("\n\nInvalid input. Please try again.");
            }
        } while (valid == 0);

    } while (replay == 'y');
}

int arrayLength(char name[])
{
    int count = 0;
    while (name[count] != '\0')
    {
        count++;
    }
    return count;
}