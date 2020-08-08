#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i > -10, i <= 5; i++)
    {
        printf("%d\n", i);
    }

    printf("\n");
    for (i = 0; ; i++) // infinite loop
    {
        printf("%d\n", i);
        if (i == 10) break;
    }

    printf("\n");
    int j;
    for (i = 0, j = 6; i <= 5; i++, j++)
    {
        printf("%d, %d\n", i, j);
    }


    return 0;
}