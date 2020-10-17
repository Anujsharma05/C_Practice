#include <stdio.h>

int main()
{

    int num;
    int i;
    int result = 1;

    scanf("%d", &num);

    for (i = num; i; i--)
    {
        result = result * i;
    }
    printf("output: %d", result);
    return 0;
}