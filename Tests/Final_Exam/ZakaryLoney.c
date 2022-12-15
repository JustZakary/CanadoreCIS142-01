// Final Exam
// By Zakary Loney
// December 14th, 2022
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char firstName[20];
    char lastName[20];
    int grades[2][5];
} s;

// Function Prototypes
void printStudent(struct student s);
struct student createStudent();
void printMenuOptions();
void printStudentList(struct student s[]);

void printMenuOptions()
{
    system("cls");
    printf("1. Print Student");
    printf("\n2. Print All Students");
    printf("\n3. Print Class Averages");
    printf("\n4. Add Student");
    printf("\n5. Exit");
    printf("\n\nEnter your choice: ");
}

void printStudentList(struct student s[])
{
    for (int i = 0; i < 5; i++)
    {
        if (s[i].firstName[0] != '\0')
        {
            printf("%d. %s %s\n", i + 1, s[i].firstName, s[i].lastName);
        }
    }
}

void printStudent(struct student s)
{
    printf("-----------------------------------------\n");
    printf("|%s %s\t\t\t\t|\n", s.firstName, s.lastName);
    printf("-----------------------------------------\n");
    printf("|COURSE CODE\t\t|GRADE\t\t|\n");
    printf("-----------------------------------------");
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("\n|\t%d\t\t|\t%d%%\t|\n", s.grades[0][i], s.grades[1][i]);
        total += s.grades[1][i];
        printf("-----------------------------------------");
    }
    printf("\n|OVERALL AVERAGE: %d%%\t\t\t|\n", total / 5);
    printf("-----------------------------------------\n");
}

struct student createStudent(struct student s)
{
    system("cls");
    printf("Enter the student's first name: ");
    scanf(" %s", s.firstName);
    printf("Enter the student's last name: ");
    scanf(" %s", s.lastName);
    printf("Enter the grade for the following courses:\n");
    getchar();
    for (int i = 0; i < 5; i++)
    {
        char input[10] = {'\0'};
        int grade = 0;
        printf("\t(%d): ", s.grades[0][i]);
        fgets(input, 10, stdin);
        if (strcmp(input, "0") == 0 || atoi(input) == 0)
        {
            grade = 0;
        }
        else
        {
            grade = atoi(input);
        }

        if (grade > 100)
        {
            s.grades[1][i] = 100;
        }
        else if (grade < 0)
        {
            s.grades[1][i] = 0;
        }
        else
        {
            s.grades[1][i] = grade;
        }
    }

    system("cls");
    printStudent(s);
    printf("Press ENTER to continue...");
    getchar();
    return s;
}

int main()
{
    int codes[5] = {121, 323, 434, 234, 111};
    // Create a array of 5 students
    struct student students[5];
    for (int i = 0; i < 5; i++)
    {
        strcpy(students[i].firstName, "\0");
        strcpy(students[i].lastName, "\0");
        for (int j = 0; j < 5; j++)
        {
            students[i].grades[1][j] = 0;
            students[i].grades[0][j] = codes[j];
        }
    }

    int choice = 0;
    do
    {
        int count = 0;
        for (int i = 0; i < 5; i++)
        {
            if (strcmp(students[i].firstName, "\0") != 0)
            {
                count++;
            }
        }
        printMenuOptions();
        scanf("%d", &choice);
        if (choice == 1)
        {
            system("cls");
            printStudentList(students);
            printf("\nChoose a student to print: ");
            scanf("%d", &choice);
            system("cls");
            printStudent(students[choice - 1]);
            printf("Press ENTER to continue...");
            getchar();
            getchar();
        }
        else if (choice == 2)
        {
            system("cls");
            if (count == 0)
            {

                printf("No students have been added yet. Press ENTER to continue...");
                getchar();
            }
            else
            {
                for (int i = 0; i < 5; i++)
                {
                    if (strcmp(students[i].firstName, "\0") != 0)
                    {
                        printStudent(students[i]);
                        printf("\n");
                    }
                }
                printf("Press ENTER to continue...");
                getchar();
                getchar();
            }
        }
        else if (choice == 3)
        {
            system("cls");
            if (count == 0)
            {
                printf("No students have been added yet. Press ENTER to continue...");
                getchar();
                getchar();
            }
            else
            {
                printf("-----------------------------------------\n");
                printf("|COURSE\t\t\t|AVERAGE\t|\n");
                printf("-----------------------------------------");
                for (int i = 0; i < 5; i++) // Loop through each course
                {
                    int courseTotal = 0;
                    for (int k = 0; k < count; k++) // Loop through each student
                    {
                        courseTotal += students[k].grades[1][i];
                    }
                    printf("\n|\t%d\t\t|\t%d%%\t|\n", codes[i], courseTotal / count);
                    printf("-----------------------------------------");
                }
                printf("\nPress ENTER to continue...");
                getchar();
                getchar();
            }
        }
        else if (choice == 4)
        {
            if (count != 5)
            {
                // Create student
                students[count] = createStudent(students[count]);
            }
            else
            {
                printf("No more students can be added. (5 MAX)");
            }
        }
        else if (choice == 5)
        {
            printf("Exiting...");
        }
        else
        {
            printf("Invalid choice, try again.");
        }
    } while (choice != 5);
    return 0;
}
