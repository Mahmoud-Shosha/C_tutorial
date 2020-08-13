#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Sorry, non-allocated memory\n");
        exit(1);
    }
    else
    {
        printf("%d\n", *ptr);
    }

    return 0;
}
