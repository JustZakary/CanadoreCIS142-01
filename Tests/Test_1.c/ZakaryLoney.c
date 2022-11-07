// Midterm Test 1
// By Zakary Loney
// Oct 21tst, 2022
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isNumberHigher(int, int);

int main(void)
{
    srand(time(NULL));     // Set seed
    system("clear||@cls"); // Make it look pretty
    int randomNumber = (rand() % 75) + 1;
    int userNumber;
    int g = 1; // count the number of guesses
    do
    {
        printf("\n(Guess #%d) Enter a number between 1 and 75: ", g);
        scanf(" %d", &userNumber);
        if (!(userNumber > 0 && userNumber < 76)) // Check if numbers are within range
        {
            printf("\nYou can only enter a number between 1 and 75. ");
        }
        else if (randomNumber == userNumber) // Check if input and random are the same
        {
            printf("You guessed the number!\nIt took you %d guesses", g);
            break;
        }
        else if (isNumberHigher(userNumber, randomNumber) == 1) // Check if number is higher then the random one
        {
            printf("Lower!\n");
            g++; // add a guess
        }
        else
        {
            printf("Higher!\n");
            g++; // add a guess
        }
    } while (userNumber != randomNumber);
}

int isNumberHigher(int number, int higherThan)
{
    // IF the user number is higher then the random number output 1, if not output 0
    if (number > higherThan)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}