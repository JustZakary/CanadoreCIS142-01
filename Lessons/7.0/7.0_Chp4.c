//
int main()
{
    int x = 0;

    printf("\n The value of x is % d\n", x);
    x++;
    printf("\n The value of x is % d\n", x);

    return 0;
}

//*************************************************************
int main()
{
    int a = 0;
    int b = 0;

    printf("\n The value of a is % d\n", a++);
    printf("\n The value of b is % d\n", ++b);
    return 0;
}
//*************************************************************

int main()
{
    int x = 0;
    int y = 1;

    x = y++ * 2; // increments y after the assignment
    printf("\n The value of x is % d\n", x);

    x = 0;
    y = 1;

    x = ++y * 2; // increments y before the assignment
    printf("\n The value of x is % d\n", x);

    return 0;
}
//*************************************************************

int main()
{
    int x = 1;
    int y = 1;

    x = y-- * 4;
    printf("\n The value of x is % d\n", x);

    y = 1;
    x = --y * 4;
    printf("\n The value of x is % d\n", x);

    return 0;
}

//*************************************************************
int main()
{
    int x = 1;
    int y = 2;

    x += y;
    printf("\n The value of x is % d\n", x);

    x = 1;
    x = y * x + 1;
    printf("\n The value of x is % d\n", x);

    x = 1;
    x += y * x + 1;
    printf("\n The value of x is % d\n", x);
    return 0;
}

//*************************************************************
int main()
{
    int x = 1;
    int y = 2;

    x -= y;
    printf("\n The value of x is % d\n", x);

    x = 1;
    x = y * x + 1;
    printf("\n The value of x is % d\n", x);

    x = 1;
    x -= y * x + 1;
    printf("\n The value of x is % d\n", x);
    return 0;
}

//*************************************************************

int main()
{
    int x = 0;

    while (x < 10)
    {
        printf("\n The value of x is % d\n", x);
        x++;
    }

    return 0;
}

//*************************************************************

int main()
{
    int x = 25;

    do
    {
        printf("\n The statement is execute at least once\n");
        x++;
    } while (x < 10);

    while (x < 10)
    {
        printf("\n The statement is never executed\n");
        x++;
    }

    do
    {
        printf("\n The statement is execute at least once\n");
        x++;
    } while (x < 10);

    return 0;
}

//*************************************************************
int main()
{
    int selection = 0;

    while (selection != 5)
    {
        printf("1\tPick a main burger\n");
        printf("2\tPick a side dish\n");
        printf("3\tPick a drink\n");
        printf("4\tPick a desert\n");
        printf("5\tQuit\n");
        scanf(" %d", &selection);
    }

    return 0;
}

//*************************************************************

int main()
{
    int i;
    for (i = 1; i < 11; ++i)
    {
        printf("%d\t", i);
    }
    return 0;
}

//*************************************************************

int main()
{
    int i;

    for (i = 1; i < 11; ++i)
    {
        printf("%d\t", i);
        if (i == 7)
            break;
    }
    printf("Koo koo cachoo, the last number I hit was %d", i);
    return 0;
}

//*************************************************************

int main()
{
    int i;

    for (i = 1; i < 11; ++i)
    {
        if (i == 7)
            continue;
        printf("%d\t", i);
    }
    return 0;
}