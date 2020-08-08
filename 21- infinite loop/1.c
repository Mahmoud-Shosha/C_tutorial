#include <stdio.h>
#define infinite for(;;)

int main(void)
{
    int i = 0;

    for (;;)
    {
        if (i == 5) break;
        printf("%d\t", i);
        i++;
    }


    printf("\n");
    i = 0;
    infinite
    {
        if (i == 5) break;
        printf("%d\t", i);
        i++;
    }


    printf("\n");
    i = 0;
    while (1)
    {
        if (i == 5) break;
        printf("%d\t", i);
        i++;
    }


    printf("\n");
    i = 0;
    do
    {
        if (i == 5) break;
        printf("%d\t", i);
        i++;
    } while (1);


    printf("\n");
    i = 0;
    infinite_loop:
        if (i == 5) goto end;
        printf("%d\t", i);
        i++;
    goto infinite_loop;
    end:



    return 0;
}