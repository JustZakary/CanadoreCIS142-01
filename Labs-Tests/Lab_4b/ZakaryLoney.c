// Lab 4b
// By Zakary Loney
// November 2nd, 2022
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    system("cls");
    // Variable Declaration
    int width = 12;
    int height = 12;

    int table[width][height];
    int i, j;
    int input;
    char repeat = 'y';
    int found = 0;

    // a loop that makes a multiplication table for 1-12
    for (i = 1; i <= width; i++)
    {
        for (j = 1; j <= height; j++)
        {
            table[i - 1][j - 1] = i * j;
        }
    }

    while (repeat == 'y' || repeat == 'Y')
    {
        found = 0;
        printf("Enter a number to search for (1-%d): ", width * height);
        scanf(" %d", &input);

        // Search for the number
        for (i = 0; i <= width; i++)
        {
            for (j = 0; j <= height; j++)
            {
                if (found != 1)
                {
                    table[i][j] = i * j;
                    if (i * j == input)
                    {
                        if (i != 1 && j != 1 && i != input && j != input) // If the number is a multiple of 1 or the number itself, ignore it
                        {
                            printf("%d can be created by multiplying %d and %d\n", input, i, j);
                            found = 1;
                        }
                    }
                }
            }
        }
        if (found == 0) // If the number is not found, print this
        {
            printf("%d Is a prime number\n", input);
        }
        printf("\n\nWould you like to search for another number? (y/n): ");
        scanf(" %c", &repeat);
        if (repeat == 'n' || repeat == 'N')
        {
            printf("Goodbye");
        }
        else if (repeat == 'y' || repeat == 'Y')
        {
            system("cls");
        }
        else
        {
            printf("Invalid Input, Goodbye");
        }
    }
}
