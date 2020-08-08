#include <stdio.h>
#define infinite for(;;)

int main(void)
{
    int i;

    for (i = 0; i <= 5; i++)
    {
        if (i == 3) continue;
        printf("%d\t", i);
    }

    return 0;
}