#include <stdio.h>  

int min(int arr[], int size)
{
    int min, i;
    
    min = arr[0];

    for (i = 0; i < size; i++)
    {
        if (arr[i] < min) min = arr[i];
    }

    return min;
}
int main()
{
    int arr[6] = {1, 7, 0, -25, -5, 25};

    printf("Min is %d\n", min(arr, 6));

    return 0;
}