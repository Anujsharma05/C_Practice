#include <stdio.h>

void printN(int n, int s, int size, int pos, int arr[s][s])
{

    for (int i = pos; i < size; i++)
    {
        for (int j = pos; j < size; j++)
        {
            *(*(arr + i) + j) = n;
        }
    }
}

int main()
{

    int n, size, pos = 0;
    scanf("%d", &n);

    size = 2 * n - 1;
    int s = size;
    int arr[size][size];

    for (int i = n; i > 0; i--)
    {
        printN(i, s, size, pos, arr);
        size = size - 1;
        pos = pos + 1;
    }

    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}