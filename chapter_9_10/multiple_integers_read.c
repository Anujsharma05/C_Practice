#include <stdio.h>

int main()
{

    FILE *ptr;
    int num;

    ptr = fopen("file.txt", "r");

    while (1)
    {
        if (fscanf(ptr, "%d", &num) == EOF)
        {
            break;
        }

        printf("%d ", num);
    }

    fclose(ptr);
    return 0;
}