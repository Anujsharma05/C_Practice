#include <stdio.h>

void reverse(int arr[], int size)
{
    int temp, start = 0, end = size - 1;

    while (start <= end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{

    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("enter the numbers\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverse(arr, size);
    return 0;
}