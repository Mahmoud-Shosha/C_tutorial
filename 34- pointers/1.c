#include <stdio.h>  


int main()
{
    int x = 10;
    int *ptr = &x;

    printf("&x ==> %p\n", &x);  // address of
    printf("ptr ==> %p\n", ptr);
    printf("&ptr ==> %p\n", &ptr);
    printf("x ==> %d\n", x);
    printf("*ptr ==> %d\n", *ptr);

    return 0;
}