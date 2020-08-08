#include <stdio.h>

int main(void)
{
    int i, j;

    printf("\n");
    for (i = 0; i <= 5; i++)
    {
        printf("i ==> %d\n", i);
    }

    printf("\n");
    i = 0;
    for (; i <= 5; i++)
    {
        printf("i ==> %d\n", i);
    }

    printf("\n");
    for (i = 0, j = 10; i <= 5; i++)
    {
        printf("i ==> %d, j ==> %d\n", i, j);
    }


    return 0;
}