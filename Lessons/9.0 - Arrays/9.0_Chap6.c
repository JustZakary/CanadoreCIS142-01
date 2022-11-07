int main()
{
    int x;
    int Array[5];

    for (x = 0; x < 5; x++)
        Array[x] = 0;

    return 0;
}

//********************************************************************************************

int main()
{
    int x;
    int Array[5];

    for (x = 0; x < 5; x++)
        Array[x] = (x + 3);

    for (x = 0; x < 5 : x++)
        printf("\nThe value of Arry index %d is %d\n", n, Array[x]);

    return 0;
}

//********************************************************************************************

int main()
{
    int x;
    int Index = -1;
    int Array[5];

    for (x = 0; x < 5; x++)
        Array[x] = (x + 5);

    do
    {
        printf("\nEnter a valid index (0-4): ");
        scanf(" %d", &Index);
    } while (Index < 0 || Index > 4);

    printf("\nThe value of Array index %d is %d\n", Index, Array[Index]);
    return 0;
}

//********************************************************************************************

int main()
{
    char Array[5];
    char Name[] = "Olivia";

    printf("\nUnitialized character array(contains unintended data):\n");
    for (x = 0; x < 5; x++)
        printf("\nArray[%d]contains value %d\n", x, Array[x]);

    printf("\nIntialized character array(contains intended data):\n");
    for (x = 0; x < 5; x++)
        printf("\nName[%d]contains value %c\n", x, Name[x]);

    return 0;
}

//********************************************************************************************

// searching one dimensional array

int main()
{
    int x int Value : int Found = -1;
    int Array[5];

    for (x = 0; x < 5; x++)
        Array[x] = (x + x);

    printf("\nEnter a Value to search for: ");
    scanf(" %d", &Value);

    for (x = 0; x < 5; x++)
    {
        if (Array[x] == Value)
        {
            Found = x;
        }
    }

    if (Found > -1)
        printf("\nI found your search value in element %d\n", Found);
    else
        printf("\nSorry, your search was not found\n");

    return 0;
}

//********************************************************************************************

int main()
{
    int x, y;
    int TwoD[3][3];

    for (x = 0; x <= 2; x++)
    {
        for (y = 0; y <= 2; y++)
            TwoD[x][y] = (x + y);
    }

    for (x = 0; x <= 2; x++)
    {
        for (y = 0; y <= 2; y++)
            printf("TwoD [%d][%d] = %d\n", x, y TwoD[x][y]);
    }

    return 0;
}
//*******************************************************************************************

int main()
{
    int x, y;
    int TwoD[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int Found = 0;
    int Value = 0;
    int FoundAt[2] = {0, 0};

    printf("\nEnter the value to search for:");
    scanf(" %d", &Value);

    for (x = 0; x <= 2; x++)
        for (y = 0; y <= 2; y++)
            if (TwoD[x][y] == Value)
            {
                Found = 1;
                FoundAt[0] = x;
                FoundAt[1] = y;
            }

    if (Found == 1)
        printf("\nI found your search value in Twod[%d][%d]\n", FoundAt[0], FoundAt[1]);
    else
        printf("\nSorry I couldn't find it.\n");

    return 0;
}