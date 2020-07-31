#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool x = 25;
    // the same as
    // bool x = true;
    

    printf("%d\n", x);
    printf("%d\n", true);
    printf("%d\n", false);

    if (x)
    {
        printf("true\n");
    }

    return 0;
}