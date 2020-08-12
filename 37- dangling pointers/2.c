#include <stdio.h>  
#include <stdlib.h>

int *func(void)
{
    int x = 50;
    return &x;
}

int main()
{
    int *ptr = func();

    // ptr becomes dangling pointer

    printf("%d\n", *ptr);

    return 0;
}