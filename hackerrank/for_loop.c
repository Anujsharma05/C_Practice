#include <stdio.h>

void printDigit(int num);

int main()
{

    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    for (int i = a; i <= b; i++)
    {
        if (i > 9)
        {
            i % 2 == 0 ? printf("even\n") : printf("odd\n");
        }
        else
        {
            printDigit(i);
        }
    }
    return 0;
}

void printDigit(int num)
{
    if (num == 1)
        printf("one");
    else if (num == 2)
        printf("two");
    else if (num == 3)
        printf("three");
    else if (num == 4)
        printf("four");
    else if (num == 5)
        printf("five");
    else if (num == 6)
        printf("six");
    else if (num == 7)
        printf("seven");
    else if (num == 8)
        printf("eight");
    else
        printf("nine");

    printf("\n");
}