// Program #2
// By Zakary Loney
//  Sept 30th, 2022
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{

    srand(time(NULL)); // set the seed the random number generator to current time

    int diceOne = (rand() % 8) + 1; // generate a random number between 1 and 8
    int diceTwo = (rand() % 8) + 1; // generate a random number between 1 and 8
    printf("You rolled a %d and a %d, that equals %d!\n\n", diceOne, diceTwo, diceOne + diceTwo);
    if (diceOne + diceTwo == 9 || diceOne + diceTwo == 15) // if the sum of the two dice is 7
    {
        printf("You win!"); // print "You win!"
    }
    else // otherwise
    {
        printf("You lose!, Try again"); // print "You lose!"
    }
}