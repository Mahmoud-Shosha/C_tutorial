#include <stdio.h>  
#include <stdlib.h>

int main()
{
    int *ptr=(int *)malloc(sizeof(int));
    *ptr = 50;
    printf("%d\n", *ptr);
    free(ptr);
    // ptr becomes dangling pointer
    printf("%d\n", *ptr);

    // we shoud use:
    ptr = NULL;
    printf("%ld\n", (long int)ptr);
    printf("%d\n", *ptr);

    return 0;
}