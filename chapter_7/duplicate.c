#include <stdio.h>

// int main()
// {
//     int n, arr[n], res[n], count = 0;

//     printf("enter how many numbers\n");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     res[0] = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if(arr[i] == res[j]) {

//             }
//         }
//     }
//     return 0;
// }

void main()
{
    int arr1[100];
    int arr2[100];
    int arr3[100];
    int n, mm = 1, ctr = 0;
    int i, j;

    printf("\n\nCount total number of duplicate elements in an array:\n");
    printf("---------------------------------------------------------\n");

    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    /*----------------- copy in other array ------------------------------------*/
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
        arr3[i] = 0;
    }
    /*------------------- mark the elements are duplicate -------------------------*/
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr3[j] = mm;
                printf("j=%d arr[%d]=%d ", j, j, arr3[j]);
                mm++;
            }
        }
        mm = 1;
        printf("\n");
    }
    /*--------------- Prints the array ------------------------------------*/
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr3[i]);
        if (arr3[i] == 2)
        {
            ctr++;
        }
    }
    printf("The total number of duplicate elements found in the array is: %d \n", ctr);

    printf("\n\n");
}
