#include <stdio.h>  


int main()
{
    int x = 50, y = 20;
    int *const ptr = &x; // constant pointer

    printf("%d\n", *ptr);

    // ptr = &y;  // error

    return 0;
}