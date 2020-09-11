#include <stdio.h>

#define MIN(a, b) ((a > b) ? b : a)
// #undef MIN

int main()
{

#ifdef MIN
    printf("MIN(5, 20) ==> %d\n", MIN(5, 20));
#else
    printf("MIN is not defined\n");
#endif

    return 0;
}
