#include <stdio.h>
#include <stdlib.h>

typedef struct Triangle
{
    int a;
    int b;
    int c;
} triangle;

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &(tr + i)->a, &tr[i].b, &tr[i].c);
    }
    // sort_by_area(tr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, (tr + i)->b, tr[i].c);
    }
    return 0;
}