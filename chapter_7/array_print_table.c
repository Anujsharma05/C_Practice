#include <stdio.h>

int main()
{

    int num, count = 1, arr[10];

    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        arr[i] = num * count;
        count++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}