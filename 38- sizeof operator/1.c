#include <stdio.h>  
#include <stdlib.h>


int main()
{
    int x = 50;
    int arr[3] ={ 1, 2, 3 };
    int *ptr = malloc(200);


    printf("size of variable x is : %ld\n", sizeof(x));
    printf("size of arr array is : %ld\n", sizeof(arr));
    printf("size of ptr pointer is : %ld\n", sizeof(ptr));

    printf("size of int data type is : %ld\n", sizeof(int));
    printf("size of char data type is : %ld\n", sizeof(char));
    printf("size of long data type is : %ld\n", sizeof(long));


    long y = 50;

    printf("size of (x * y) expression is : %ld\n", sizeof(x * y));



    return 0;
}