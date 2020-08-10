#include <stdio.h>


int main(void)
{

    int a[3][2] ={ { 0, 1 }, { 1, 2 }, { 2, 3 } };
    // int a[][2] ={ { 0, 1 }, { 1, 2 }, { 2, 3 } };

    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 6; i++)
    {
        printf("%d\t", *(*a + i));
    }

    return 0;
}
