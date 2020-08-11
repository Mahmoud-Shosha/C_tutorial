// 2- Returning array using static variable.

#include <stdio.h>  
#include <stdlib.h>

#define SIZE 5

struct array {
    int arr[SIZE];
};

struct array getarray()
{
    struct array x;

    printf("Enter array elements \n");

    int i;
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &x.arr[i]);
    }
    return x;
}
int main()
{
    struct array x;

    x = getarray();

    printf("Elements that you have entered are : \n");

    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", x.arr[i]);
    }
    printf("\n");

    return 0;
}