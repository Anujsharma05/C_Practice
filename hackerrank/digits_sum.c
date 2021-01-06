#include <stdio.h>

int main()
{

    int n = 10564;
    int sum = 0;

    while (n > 0)
    {
        int last_digit = n % 10;
        sum = sum + last_digit;
        n = n / 10;
    }

    printf("%d", sum);
}