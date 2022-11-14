// Lab 7
// By Zakary Loney
// Nov 14th, 2022
#include <stdio.h>;
#include <stdlib.h>;
#include <string.h>;
int main()
{
    system("cls");
    char *phrase = "A computer once beat me at chess, but it was no match for me at kick boxing!";
    char search[12] = {'\0'};

    printf("\n\nThe phrase is: %s\n\nEnter search term: ", phrase);
    scanf(" %s", search);

    if (strstr(phrase, search) != NULL)
        printf("\nSearch \"%s\" was found in the phrase\n", search);
    else
        printf("\nSearch \"%s\" was not found in the phrase\n", search);

    return 0;
}