#include<stdio.h>  

int main()
{
    int x;
    int *ptr;

    ptr = &x;
    printf("ptr ==> %p\n", ptr);

    ptr++;  // incremented by 4 bytes, size of int data type
    printf("ptr ==> %p\n", ptr);

    ptr--;  // decremented by 4 bytes, size of int data type
    printf("ptr ==> %p\n", ptr);

    ptr = ptr + 3;
    printf("ptr ==> %p\n", ptr);

    ptr = ptr - 3;
    printf("ptr ==> %p\n", ptr);

    int y;
    int *ptr2 = &y;

    printf("ptr - &ptr ==> %ld\n", ptr2 - ptr);


    return 0;
}