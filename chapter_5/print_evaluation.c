#include <stdio.h>

int main()
{
    int a = 5;

    int b = 7 * 2 - 6;
    printf("%d\n", b);

    //evaluation happens from right to left
    printf("%d %d %d\n", a, ++a, a++);
    return 0;
}