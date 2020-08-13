#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[] = {'M', 'a', 'h', 'm', 'o', 'u', 'd', '\0'};
    char name2[] = "Mahmoud";

    printf("__%s__\n", name);
    printf("__%s__\n", name2);

    int i;

    for (i = 0; i < 7; i++)
    {
        printf("%c\t", name[i]);
    }

    printf("\n");

    for (i = 0; name[i] != NULL; i++)
    {
        printf("%c\t", name[i]);
    }

    printf("\n");

    return 0;
}
