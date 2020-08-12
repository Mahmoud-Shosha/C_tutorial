#include <stdio.h>  


int main()
{
    int *ptr = NULL;  // used for error handling
    // int *ptr; 

    if (ptr != NULL)
    {
        printf("%d\n", *ptr);
    }
    else
    {
        printf("Non valid pointer \n");
    }
    return 0;
}