#include <stdio.h>

int f(int);

int main()
{
    int c, n, i = 0;

    scanf("%d", &n);

    for (c = 0; c < n; c++)
    {
        printf("%d ", f(c));
    }
}

int f(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return f(n - 1) + f(n - 2);
    }
}
