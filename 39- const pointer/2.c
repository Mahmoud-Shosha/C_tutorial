#include <stdio.h>  


int main()
{
    const int x = 50, y = 20;
    const int *ptr; // pointer to a constant variable

    ptr = &x;
    printf("%d\n", *ptr);

    ptr = &y;
    printf("%d\n", *ptr);


    // *ptr = 70;  // error



    return 0;
}