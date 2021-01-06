#include <stdio.h>
#include <string.h>

int main()
{

    char st[] = "harry";
    char tr[3];
    char *str = "abcdefgh";

    //cannot reinitialize with this declaration
    //st[] = "harrynew";

    printf("%s\n", *str);
    // *str[0] = 'c';
    printf("%s\n", str);
    // scanf("%c", &tr);
    printf("%s", tr);

    // gets(tr);
    // printf("\n%d\n", strlen(tr));
    // puts(tr);
    // strcpy(tr, st);
    //strlen(str);
    printf("\n%d", strcmp("B", "C"));
    // printf("%c", 97);
    return 0;
}