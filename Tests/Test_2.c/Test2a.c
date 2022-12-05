// Test 2a
// Class Grades Program
// NAME: Zakary Loney
// DATE: Dec 2nd, 2022
//
#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int roll;
    float marks;
} s;

void printAverage(float);

int main()
{
    int i;
    float totalmarks = 0;
    struct student students[5];

    printf("Enter information of students:\n");

    // Storing information
    for (i = 0; i < 5; ++i)
    {
        students[i].roll = i + 1;
        printf("\nFor roll number %d,\n", students[i].roll);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
        printf("\n\n");
    }

    // Displaying Information
    printf("\nName\t\t   Mark", students[i].name, students[i].marks);
    printf("\n*****************************");
    for (i = 0; i < 5; ++i)
    {
        printf("\n%d. %s\t\t%.1f", students[i].roll, students[i].name, students[i].marks);
        totalmarks += students[i].marks;
    }

    printAverage(totalmarks);

    printf("\n\n");
    return 0;
}

void printAverage(float mark)
{
    printf("\n\nCLASS AVERAGE : \t %.1f", mark / 5);
}