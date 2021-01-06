#include <stdio.h>

int main()
{

    int arr[3][10], a[3];

    printf("enter three numbers separated by spaces\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = a[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}