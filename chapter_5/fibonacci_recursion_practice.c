#include <stdio.h>

int print(int n)
{
    int output;

    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return print(n - 2) + print(n - 1);
    }
}

int main()
{
    int term, output;
    printf("enter the term:\n");
    scanf("%d", &term);

    for (int i = 1; i <= term; i++)
    {
        output = print(term);
    }
    printf("%d", output);
    return 0;
}