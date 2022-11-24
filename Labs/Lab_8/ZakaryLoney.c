// Lab 8
// By Zakary Loney
// Nov 21st, 2022
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact
{
    char name[20];
    char phone[20];
    char email[20];
    char yearsFriend[5];
} c;

void printMenuOptions();
void printContacts(struct contact c);
void printAllContacts(struct contact c[]);
struct contact addContact();

void printMenuOptions()
{
    printf("\n\n1. Print Contacts");
    printf("\n2. Edit Contact");
    printf("\n3. Exit");
    printf("\n\nEnter your choice: ");
}

void printContacts(struct contact c)
{
    if (c.name[0] == '\0' && c.email[0] == '\0' && c.phone[0] == '\0' && c.yearsFriend[0] == '\0')
    {
        printf("\n");
    }
    else
    {
        printf("Name:\t\t\t%s", strcmp(c.name, "\0") != 0 ? c.name : "N/A\n");
        printf("Phone:\t\t\t%s", strcmp(c.phone, "\0") != 0 ? c.phone : "N/A\n");
        printf("Email:\t\t\t%s", strcmp(c.email, "\0") != 0 ? c.email : "N/A\n");
        printf("Years friends:\t\t%s\n", strcmp(c.yearsFriend, "\0") != 0 ? c.yearsFriend : "N/A");
    }
}

void printAllContacts(struct contact c[])
{
    for (int i = 0; i < 5; i++)
    {
        if (c[i].name[0] == '\0' && c[i].email[0] == '\0' && c[i].phone[0] == '\0' && c[i].yearsFriend[0] == '\0')
        {
            printf("-----------------------------------------------\n");
            printf("Contact Slot %d is empty\n", i + 1);
        }
        else
        {
            printf("-----------------------------------------------\n");
            printf("Contact Slot %d:\n", i + 1);
            printContacts(c[i]);
        }
    }
    printf("-----------------------------------------------\n");

    printf("\nPress ENTER to continue...");
    getchar();
    getchar();
    system("cls");
    return;
}

struct contact addContact()
{
    system("cls");
    getchar();

    struct contact newContact;
    char input[20] = {'\0'};
    printf("Enter the name: ");
    fgets(input, 20, stdin);
    if (strcmp(input, "\n") == 0)
        strcpy(newContact.name, "\0");
    else
        strcpy(newContact.name, input);

    printf("Enter the phone: ");
    fgets(input, 20, stdin);
    if (strcmp(input, "\n") == 0)
        strcpy(newContact.phone, "\0");
    else
        strcpy(newContact.phone, input);

    printf("Enter the email: ");
    fgets(input, 20, stdin);
    if (strcmp(input, "\n") == 0)
        strcpy(newContact.email, "\0");
    else
        strcpy(newContact.email, input);

    printf("Enter the amount of years you have been friends: ");
    fgets(input, 20, stdin);
    if (strcmp(input, "\n") == 0)
        strcpy(newContact.yearsFriend, "\0");
    else
        strcpy(newContact.yearsFriend, input);

    printf("-----------------------------------------------\n");
    printf("Contact updated!\n");
    printContacts(newContact);
    printf("-----------------------------------------------\n");

    printf("\nPress ENTER to continue...");

    getchar();
    system("cls");
    return newContact;
}

int main()
{
    struct contact contacts[5];   // Create an array of 5 contacts
    struct contact *p = contacts; // Create a pointer to the array
    for (int i = 0; i < 5; i++)
    {
        strcpy(contacts[i].name, "\0");
        strcpy(contacts[i].phone, "\0");
        strcpy(contacts[i].email, "\0");
        strcpy(contacts[i].yearsFriend, "\0");
    }
    int exit = 0;
    while (exit == 0)
    {
        printMenuOptions();
        int choice = 0;
        scanf(" %d", &choice);
        if (choice == 1)
        {
            printAllContacts(contacts);
        }
        else if (choice == 2)
        {
            printf("\nWhich contact slot would you like to edit? (1-5): ");
            int slot = 0;
            scanf(" %d", &slot);
            if (slot > 0 && slot < 6)
            {
                contacts[slot - 1] = addContact();
            }
            else
            {
                printf("Invalid slot number!\n");
            }
        }
        else if (choice == 3)
        {
            exit = 1;
            printf("\nGoodbye!\n");
            printf("Exiting...");
            return 0;
        }
        else
        {
            printf("Invalid choice, try again!\n");
        }
    }
}