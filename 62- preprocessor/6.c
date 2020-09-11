#include <stdio.h>

// #define MIN(a, b) ((a > b) ? b : a)

#ifndef MIN
#error You must define the MIN function-like macro
#endif


int main()
{

    printf("MIN(5, 20) ==> %d\n", MIN(5, 20));

    return 0;
}
