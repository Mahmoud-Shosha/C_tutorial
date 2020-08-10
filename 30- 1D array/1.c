#include <stdio.h>

int main(void)
{

    // array declaration
    float marks[3];

    // array initialization
    marks[0] = 10;
    marks[1] = 5;
    marks[2] = 3.5;

    // traverse of array
    int i;
    for (i = 0; i <3; i++)
    {
        printf("%g\t", marks[i]);
        printf("%g\n", *(marks + i));
    }

    return 0;
}
