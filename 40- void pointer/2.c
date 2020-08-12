#include <stdio.h>  
#include <stdlib.h>


int main()
{
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));

    *ptr = 20;
    printf("%d\n", *ptr);


    return 0;
}