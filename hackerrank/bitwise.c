#include <stdio.h>

int main()
{
    int n, k;
    int andMax = 0, orMax = 0, xorMax = 0;

    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {

            int andOutput = i & j;
            int orOutput = i | j;
            int xorOutput = i ^ j;

            if (andOutput > andMax && andOutput < k)
            {
                andMax = andOutput;
            }

            if (orOutput > orMax && orOutput < k)
            {
                orMax = orOutput;
            }

            if (xorOutput > xorMax && xorOutput < k)
            {
                xorMax = xorOutput;
            }
        }
    }

    printf("%d\n%d\n%d", andMax, orMax, xorMax);

    return 0;
}