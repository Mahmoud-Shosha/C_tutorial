#include <stdio.h>

int main(void)
{

    // array declaration with initialization
    float marks[] = {10, 5, 2.58};
    // float marks[3] = {10, 5, 2.58};

    // traverse of array
    int i;
    for (i = 0; i <3; i++)
    {
        printf("%g\t", marks[i]);
        printf("%g\n", *(marks + i));
    }

    return 0;
}
