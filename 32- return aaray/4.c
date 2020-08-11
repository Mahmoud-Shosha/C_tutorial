// 2- Returning array using static variable.

#include <stdio.h>  
#include <stdlib.h>

#define SIZE 5

int *getarray()
{
    static int arr[SIZE];

    printf("Enter array elements \n");

    int i;
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    return arr;
}
int main()
{
    int *arr;

    arr = getarray();

    printf("Elements that you have entered are : \n");

    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}