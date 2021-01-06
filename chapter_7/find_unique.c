#include <stdio.h>

int main()
{

    int arr[10], res[10], n, index = 0;

    printf("enter the number of elements: ");
    scanf("%d", &n);

    printf("\nEnter elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int found = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            res[index] = arr[i];
            index++;
        }
    }

    for (int i = 0; i < index; i++)
    {
        printf("%d ", res[i]);
    }

    return 0;
}