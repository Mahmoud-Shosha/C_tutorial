#include <stdio.h>  
#include <stdlib.h>


int main()
{
    int x = 5;
    void *ptr;

    ptr = &x;
    printf("%d\n", *(int*)ptr);
    // printf("%d\n", *ptr); // error


    return 0;
}