#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);

    switch (x)
    {
    case 'a':
        printf("a case");
        break;
    case 'b':
        printf("b case");
        break;
    case 'l':
        printf("l case");
        break;
    default:
        printf("any other");
        break;
    }
}