#include <stdio.h>  
#include <stdlib.h>


int main()
{
    int *ptr = (int*)malloc(500 * sizeof(int));
    // int *ptr = (int*)malloc(500000000000000 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory is not allocated\n");
    }
    else
    {
        printf("Memory is allocated\n");
    }

    return 0;
}