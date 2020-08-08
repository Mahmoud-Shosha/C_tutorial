#include <stdio.h>
#define infinite for(;;)

int main(void)
{
    int i, j;

    for (i = 0; i <= 3; i++)
    {
        printf("%d\t", i);
        if (i == 5) break;
    }

    printf("\n");
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= 5; j++)
        {
            printf("%d, %d\t", i, j);
            if (j == 2) break;
        }
    }

    // Also can be used with while loop, do-while loop, switch


    return 0;
}