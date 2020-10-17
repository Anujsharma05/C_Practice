#include <stdio.h>

int main()
{

    int i;

    scanf("%d", &i);
    int *ptr = &i;
    printf("%d", *ptr);
}