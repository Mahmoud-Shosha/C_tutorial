#include <stdio.h>

int main(void)
{
    switch (20)
    {
    case 10:
        printf("10\n");
        break;

    case 20:
        printf("20\n");
        break;

    case 30:
        printf("30\n");
        break;

    default:
        printf("Not 10, 20, 30\n");
    }

    return 0;
}