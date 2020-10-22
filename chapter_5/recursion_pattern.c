#include <stdio.h>

int printPattern(int n, int num, int toggle)
{

    if (toggle)
    {
        printf("%d ", num);
        if (num - 5 <= 0)
        {
            toggle = 0;
        }
        printPattern(n, num - 5, toggle);
    }
    else
    {
        printf("%d ", num);
        if (n == num)
        {
            return 0;
        }
        printPattern(n, num + 5, toggle);
    }
}

int main()
{

    int num;

    scanf("%d", &num);

    printPattern(num, num, 1);
    return 0;
}