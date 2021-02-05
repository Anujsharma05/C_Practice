#include <stdio.h>

void testMethod(int arr[][3])
{
    printf("%d", *(arr + 1));
    printf("\n%d", *(*(arr + 2) + 2));
}

int main()
{

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    testMethod(arr);

    return 0;
}