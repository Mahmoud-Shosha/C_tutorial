#include <stdio.h>

int main(void)
{
    // Printing all ASCII character
    for (int i = 0; i <= 127; i++)
    {
        printf("character '%c' its ASCII value is '%d'\n", i, i);
    }

    return 0;
}