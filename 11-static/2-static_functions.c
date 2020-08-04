#include <stdio.h>
#include "2-static_functions.h"

int main(void)
{
    // Unlike global functions in C, access to static functions is restricted to the file where they are declared.
    //when we want to restrict access to functions, we make them static.
    // Another reason for making functions static can be reuse of the same function name in other files.
    hello();

    return 0;
}