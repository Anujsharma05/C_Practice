#include <stdio.h>
#include <string.h>

void vowelSum(char subs[], int *s)
{
    int length = strlen(subs);

    for (int i = 0; i < length; i++)
    {
        switch (subs[i])
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
            *s = *s + 1;
            break;

        default:
            break;
        }
    }
}

void permutations(char str[], int *sm)
{
    char subs[100];

    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            subs[j] = str[j];
        }
        subs[i + 1] = '\0';

        vowelSum(subs, sm);
    }
}

int main()
{

    char str[100000] = "baceb";
    int sum = 0;
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        int counter = 0;
        char sub[100];
        for (int j = i; j < length; j++)
        {
            sub[counter] = str[j];
            counter++;
        }
        sub[length - i] = '\0';

        permutations(sub, &sum);
    }

    printf("%d", sum);
    return 0;
}