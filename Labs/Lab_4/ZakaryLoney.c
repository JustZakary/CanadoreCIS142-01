// Lab #4
// By Zakary Loney
// Oct 14th, 2022
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
    system("clear||@cls"); // clear the screen to make it look nice

    char inputString[50];
    char aOrD;    // define a variable to hold whether or not the input will be sorted in ascending or disscending.
    int done = 0; // define a variable to let a while loop to end.
    printf("Enter a string (Max 50 chars, no spaces): ");

    scanf("%s", inputString);

    do
    {
        printf("Would you like to sort \"%s\" in ascending or descending alphabetic order? (type \"a\" or \"d\"): ");
        scanf(" %c", &aOrD);
        printf("\n");
        if (aOrD == 'a' || aOrD == 'A')
        {
            int x, y, tempStore;
            char string[strlen(inputString)];
            strcpy(string, inputString);
            int stringLength = strlen(string);

            for (x = 0; x < stringLength - 1; x++) // loop through the strings characters (the -1 is because there is a blank char at the end.)
            {
                for (y = x + 1; y < stringLength; y++)
                {
                    if (string[x] > string[y]) // swaps chars
                    {                          // if a character lower in the alphabet is found in this index, it swaps weith the greater character above it.
                        tempStore = string[y];
                        string[y] = string[x];
                        string[x] = tempStore;
                    }
                }
            }
            printf("%s", string);
            done = 1;
        }
        else if (aOrD == 'd' || aOrD == 'D')
        {
            int z, w, tempStore;
            char string[strlen(inputString)];
            strcpy(string, inputString);
            int stringLength = strlen(string);

            for (z = 0; z < stringLength - 1; z++) // loop through the strings characters (the -1 is because there is a blank char at the end.)
            {
                for (w = z + 1; w < stringLength; w++)
                {
                    if (string[z] < string[w]) // swaps chars
                    {                          // if a character lower in the alphabet is found in this index, it swaps weith the greater character above it.
                        tempStore = string[w];
                        string[w] = string[z];
                        string[z] = tempStore;
                    }
                }
            }
            printf("%s", string);
            done = 1;
        }
        else
        {
            // clear terminal and ask for input again.
            system("clear||@cls");
            printf("Please type \"a\" or \"d\"\n\n");
        }
    } while (done == 0);
}