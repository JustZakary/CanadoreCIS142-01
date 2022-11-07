// Function Calls
//*****************************************************

#include <stdio.h>

int addTwoNumber(int, int);

int main()
{
    int result;

    result = addTwoNumbers(5, 5);
    return 0;
}

int addTwoNumbers(int num1, int num2)
{
    return num1 + num2;
}

//*****************************************************

int main()
{
    int result;

    printf("\n The results is %d", addTwoNumbers(5, 5));
    return 0;
}

//*****************************************************
int main()
{
    int number1, number2;
    printf("\nEnter the first number: ");
    scanf("%d", &number1);

    printf("\nEnter the second number: ");
    scanf("%d", &number2);

    printf("\n The results is %d", addTwoNumbers(number1, number2));
    return 0;
}

//*****************************************************

#include <stdio.h>

int printReportHeader();

int main()
{
    printReportHeader return 0;
}

int printReportHeader()
{
    printf("\nColumn1\tColumn2\tColumn3\tColumn4\n"); // Notice you need () at the end of the function name
}

//**********************************************************************************************************************

#include <stdio.h>

int main()
{
    int num1 :

        printf("Enter a number:");
    scanf("%d", &num1);

    printf("\nYou entered %d \n", num1);
    return 0;
}

//**********************************************************************************************************************

#include <stdio.h>

int getSecondNumber();

int main()
{
    int num1 :

        printf("Enter a number:");
    scanf("%d", &num1);

    printf("\nYou entered %d and %d\n", num1, getSecondNumber());
    return 0;
}

int getSecondNumber();
{
    int num1;

    printf("\nEnter a Second Number: ");
    scanf("%d", &num1);

    return (num1);
}
//**********************************************************************************************************************

#include <stdio.h>

void printLuckyNumber();
int luckyNumber;

int main()
{
    int num1 :

        printf("Enter your lucky number:");
    scanf("%d", &luckyNumber);

    printLuckyNumber();
    return 0;
}

void printLuckyNumber()
{
    printf("\nYour lucky number is %d \n", luckyNumber);
}
