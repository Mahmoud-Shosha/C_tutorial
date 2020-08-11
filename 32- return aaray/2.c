#include <stdio.h>

void func(int *arr);

int main(void)
{
    int arr[] ={ 0, 1, 2, 3 };

    func(arr);

    int i;
    for (i = 0; i < 4; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}

void func(int *arr)
{
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("%d\n", arr[i]);
        arr[i] = 55;
    }
}