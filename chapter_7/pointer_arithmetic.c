#include <stdio.h>

int main()
{

    int arr[3] = {1, 2, 3};

    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", size);
    int *baseAdd = &arr[0];
    // printf("%u\n", baseAdd);
    printf("%d\n", *baseAdd);
    // printf("%u\n", baseAdd);
    printf("a=%d\n", *(baseAdd + 2));
    return 0;
}