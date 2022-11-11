// Midterm Test 1
// By Zakary Loney
// Nov 11th, 2022
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Variable Declaration
    int i = 5;
    int *ptr = &i;
    char replay = 'y';

    do
    {
        system("cls");
        printf("Welcome! This program will show you how to use pointers in C.\n");
        printf("1) Set the value of i\n");
        printf("2) Print the value of i\n");
        printf("3) Print the address of i\n");
        printf("4) Print the value of ptr\n\n");

        int choice;
        printf("Please enter your choice: ");
        scanf(" %d", &choice);

        if (choice == 1)
        {
            int value;
            printf("Please enter the value you want to set i to: ");
            scanf(" %d", &value);
            i = value;
        }
        else if (choice == 2)
        {
            printf("The value of i is %d\n\n", i);
        }
        else if (choice == 3)
        {
            printf("The address of i is %p\n\n", ptr);
        }
        else if (choice == 4)
        {
            printf("The value of ptr is %d\n\n", *ptr);
        }
        else
        {
            printf("Invalid choice!\n\n\n");
        }

        printf("Would you like to play again? (y/n): ");
        scanf(" %c", &replay);
    } while (replay == 'y' || replay == 'Y');
}