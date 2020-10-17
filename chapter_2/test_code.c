#include <stdio.h>

int main()
{

    //run each separately

    //int float goes to float
    //printf("%d\n", 5.5 / 2);
    //int int goes to int
    //printf("%f\n", 6 / 2);
    //float float goes to float
    //printf("%d\n", 5.5 / 2.5);

    // priority:
    // 1st : *  /  %
    // 2nd : +   -
    // 3rd : =
    // when operator are of equal priority then evaluated left to right
    printf("%d", 6 * 2 / 3);
    return 0;
}