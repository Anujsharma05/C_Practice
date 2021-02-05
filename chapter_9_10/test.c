#include <stdio.h>

int main()
{
    struct course
    {
        int courseno;
        char coursename[25];
    };

    struct course c[] = {{102, "C"},
                         {103, "C++"},
                         {104, "Java"}};
    printf("%d ", c[1].courseno);
    printf("%s\n", (*(c + 2)).coursename);
    return 0;
}