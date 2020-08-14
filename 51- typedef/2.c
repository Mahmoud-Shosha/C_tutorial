#include <stdio.h>

int main()
{
    typedef int *intptr;
    int x = 10;
    intptr p = &x;

    printf("%d\n", *p);

    return 0;
}
