#include <stdio.h>  
#include <stdlib.h>

int *func(void)
{
    static int x = 50;
    return &x;
}

int main()
{
    int *ptr = func();

    // ptr is not dangling pointer

    printf("%d\n", *ptr);

    return 0;
}