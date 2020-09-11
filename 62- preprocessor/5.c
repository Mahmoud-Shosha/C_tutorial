#include <stdio.h>
#include <stdbool.h>

// #define DEBUG true
#define DEBUG false

int main()
{
#if DEBUG
    printf("Code in case of debug\n");
#else
    printf("Code in case of not debug\n");
#endif

    return 0;
}
