// Lecture ch7 code

int main(void)
{
	int x = 0;
	int Age = 30;
	int *pointAge;

	pointAge = &Age;

	x = *pointAge;

	printf("The actual value of pointAge is %p \n", pointAge);
	printf("The indirect value of pointAge is %d \n", *pointAge);
	printf("The actual value of x is now %d \n", x);

	return 0;
}

////***************************************************
int main()
{
	int x = 5;
	int *ptr;

	ptr = &x;
	ptr = 7;

	printf("The actual value of ptr is %p", ptr);
	printf("The indirect value of ptr is %d", *ptr);
	printf("The actual value of x is now %d", x);

	ptr = &x;
	*ptr = 7;

	printf("The actual value of ptr is %p", ptr);
	printf("The indirect value of ptr is %d", *ptr);
	printf("The actual value of x is now %d", x);
}
////****************************************************

int main(void)
{
	int x = 5;
	int y = 3;
	int *ptr = NULL;

	printf("The value of ptr is %p \n", ptr);

	ptr = &y;
	printf("Now ptr point to %p \n", ptr);

	x = *ptr;
	printf("The value of x is now %d \n", x);

	*ptr = 15;
	printf("The value of y is now %d \n", y);
}

////*******************************************************************************

int addTwoNumbers(int, int);

int main(void)
{
	int x = 0;
	int y = 0;

	printf("\nEnter a number: ");
	scanf(" %d", &x);

	printf("\nEnter a second number: ");
	scanf(" %d", &y);

	printf("\nResult is %d\n", addTwoNumbers(x, y));
	return 0;
}

int addTwoNumbers(int x1, int y1)
{
	return x1 + y1;
}

//***********************************************

// Implementing information hiding by passing arguments by value

void demoPassByValue(int);

int main()
{
	int x = 0;

	printf("\nEnter a number: ");
	scanf("%d", &x);

	demoPassByValue(x);

	printf("\nthe original value of x did not change and is still: %d\n", x);
	return 0;
}

int demoPassByValue(int x)
{
	x = +5;
	printf("\nThe value of x is: %d\n", x);
}

//***********************************************
// passing an argument by reference using indirection

void demoPassByValue(int *);

int main()
{
	int x = 0;
	printf("\nEnter a number: ");
	scanf("%d", &x);
	demoPassByValue(&x);
	printf("\nThe value of x in main() is: %d\n", x);
	return 0;
}

void demoPassByValue(int *ptrX)
{
	*ptrX += 5;
	printf("\nThe value of x is: %d\n", *ptrX);
}
//***********************************************  passing arrays

// Assigning the first address of an array to a pointer

int main(void)
{
	int array[5] = {1, 2, 3, 4, 5};
	int *ptr = array;

	printf("The Address of pointer is: %p\n", ptr);
	printf("The first address of the array is: %p\n", &array);
	printf("The second address of the array is: %p\n", &array[1])

		printf("The pointer points to %d\n", *ptr);
	printf("The element to the array contains to %d\n", array[0]);
	return 0;
}

//***********************************************
// Passing an array as an argument

int nameLength(char[]);

int main()
{
	char Name[20] = {'\0'};

	printf('\nEnter your first name: ');
	scanf(" %s", Name);

	printf("\nYour first name contains %d characters\n", nameLength(name));
	return 0;
}

int nameLength(char name[]);
{
	int x = 0;
	while (name[x] != '\0')
		x++;
	return x;
}

//***********************************************

// modifying array content throught indirection and passing arrays

void squareNumbers(int[]);

int main()
{
	int x;
	int Numbers[3] = {2, 4, 6};

	printf("\nThe current array values are: ");

	for (x = 0; x < 3; x++)
		printf("\n%d", Numbers[x]);

	printf("\n");

	squareNumbers(Numbers);
	printf("\nThe modified arry values are: ");
	for (x = 0; x < 3; x++)
		printf("%d ", Numbers[x]);

	return 0;
}

void squareNumbers(int num[])
{
	int x;
	for (x = 0; x < 3; x++)
		num[x] = num[x] * num[x];
}

//***********************************************
void printNumber(const int *);

int main()
{

	int Number = 5;

	printNumber(&Number);

	return 0;
}

void printNumber(const int *num)
{
	printNumber("Read only argument is: %d ", *num);
}

//************************************************
// Remember that arrays are passed to functions by reference, to prevent an array argument from being altered in a function we use the const

void printArray(const int[]);

int main()
{
	int number[3] = {2, 4, 6};

	printArray(Number);

	return 0;
}

void printArray(const int num[])
{
	int x;
	printNumber("\n Array contents are:");

	for (x = 0; x < 3; x++)
		printNumber("%d", num[x]);
}

//************************************************

void changeArray(const int[]);

int main()
{
	int number[3] = {2, 4, 6};

	changeArray(Number);

	return 0;
}

void changeArray(const int num[])
{
	int x;
	for (x = 0; x < 3; x++)
		num[x] = num[x] * num[x]; // this will not work!
}
//***********************************************
