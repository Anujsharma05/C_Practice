#include <stdio.h>

int main()
{

    FILE *ptr;

    ptr = fopen("file.txt", "w");
    int num = 69;
    if (ptr == NULL)
    {
        printf("file not found");
    }
    else
    {
        // fscanf(ptr, "%d", &num);
        // fprintf(ptr, "%d", num);
        // printf("%d", num);
        printf("%c", fgetc(ptr));
        char ch = 'c';
        // while (1)
        // {
        //     ch = fgetc(ptr);
        //     if (ch == EOF)
        //     {
        //         break;
        //     }
        //     printf("%c", ch);
        // }
        fputc(ch, ptr);
    }

    fclose(ptr);
    return 0;
}