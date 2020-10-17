#include <stdio.h>

int main()
{

    int num;
    int i = 3;
    int condition = 1;
    scanf("%d", &num);

    while (i < num)
    {

        if (num % i == 0)
        {
            condition = 0;
            break;
        }

        i++;
    }

    if (condition)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}