#include <stdio.h>

void swap(int*, int*);


int main(void)
{
    int x = 10, y = 20;

    printf("main before: x ==> %d, y ==> %d\n", x, y);

    // call by refernce
    swap(&x, &y);

    printf("main before: x ==> %d, y ==> %d\n", x, y);


    return 0;
}


void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
