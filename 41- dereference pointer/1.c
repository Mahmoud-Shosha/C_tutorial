#include <stdio.h>  


int main()
{
    int x = 5;
    int *ptr;
    ptr = &x;

    printf("%d\n", *ptr);

    // dereferencing ptr
    *ptr = 20;

    printf("%d\n", *ptr);


    return 0;
}