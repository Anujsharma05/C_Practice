#include <string.h>
#include <stdio.h>

int main()
{
    char str[100] = "dumbledore";
    int sum = 0;
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        switch (str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            sum++;
            break;

        default:
            break;
        }
    }

    printf("%d", sum);

    return 0;
}