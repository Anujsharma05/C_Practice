#include <stdio.h>

void second(int *y)
{
    printf("yb%d\n", *y);
    *y = *y + 1;
    printf("ya%d\n", *y);
}

void first(int *x)
{
    printf("xb%d\n", *x);
    *x = *x + 1;
    printf("xa%d\n", *x);
    second(x);
}

int main()
{

    int sum = 0;
    printf("sum addr: %d\n", &sum);
    first(&sum);

    printf("%d", sum);
    return 0;
}