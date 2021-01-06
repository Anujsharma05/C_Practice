#include <stdio.h>

// void print(int *j)
// {
//     *j *= 10;
// }

int main()
{

    int i = 5;
    int *j = &i;
    int **k = &j;

    // print(&i);
    printf("%d", **k);
    return 0;
}