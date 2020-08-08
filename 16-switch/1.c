#include <stdio.h>

int main(void)
{
    switch (50 > 10)
    {
    case 1:
        printf("true\n");
        break;

    case 0:
        printf("false\n");
        break;

    default:
        printf("Never executed");
    }
    
    return 0;
}