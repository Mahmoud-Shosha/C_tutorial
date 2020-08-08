#include <stdio.h>

int main(void)
{
    int i, j, k;

    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            for (k = 0; k <= 4; k++)
            {
                if (i == 2) goto end;
                printf("%d, %d, %d\t", i, j, k);
            }
            printf("\n");
        }
        printf("\n");
    }
    end:

    return 0;
}