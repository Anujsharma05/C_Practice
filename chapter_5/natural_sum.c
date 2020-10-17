#include <stdio.h>

int sum(int);

int main()
{

    int num;

    scanf("%d", &num);

    int result = sum(num);
    printf("%d", result);
    return 0;
}

int sum(int num)
{
    if (num == 0)
    {
        return num;
    }
    else
    {
        return num + sum(num - 1);
    }
}