#include <stdio.h>

void reverseArray(int *ptr, int size)
{

    int reversedArray[size];

    int count = 0;

    for (int i = size - 1; i >= 0; i--)
    {
        reversedArray[i] = *(ptr + count);
        count++;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", reversedArray[i]);
    }
}

int main()
{

    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 29};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(&arr[0], size);
    return 0;
}