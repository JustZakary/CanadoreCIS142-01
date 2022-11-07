// Program #1
// By Zakary Loney
// Sept 30th, 2022
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand(time(NULL));             // set the seed the random number generator to current time
    int random = (rand() % 8) + 1; // generate a random number between 1 and 8
    switch (random)
    {
    case 1:
        printf("Yes!\n");
        break;
    case 2:
        printf("No!\n");
        break;
    case 3:
        printf("Definitely!\n");
        break;
    case 4:
        printf("Definitely NOT!\n");
        break;
    case 5:
        printf("Ask again later\n");
        break;
    case 6:
        printf("Ask a therapist\n");
        break;
    case 7:
        printf("Ask a friend\n");
        break;
    case 8:
        printf("Sure why not.\n");
    }
}