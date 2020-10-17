#include <stdio.h>

int main()
{

    int n;
    int i = 1;

    printf("enter a number\n");
    scanf("%d", &n);

    do
    {
        printf("%d", i);
        i++;
    } while (i <= n);

    return 0;
}