#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    printf("--------------------------------------\n");
    i = 1;
    while (i<=10)
    {
        j = 1;
        while (j <= 10)
        {
            printf("%d\t", i * j);
            j++;
        }
        printf("\n");
        i++;
    }

    printf("--------------------------------------\n");
    i = 1;
    do
    {
        j = 1;
        do
        {
            printf("%d\t", i * j);
            j++;
        } while (j <= 10);
        printf("\n");
        i++;
    } while (i<=10);


    return 0;
}