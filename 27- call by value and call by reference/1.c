#include <stdio.h>

void double_num(int);


int main(void)
{
    int x = 10;

    printf("main before: x ==> %d\n", x);

    // call by value
    double_num(x);

    printf("main after: x ==> %d\n", x);

    return 0;
}


void double_num(int x)
{
    printf("double_num before: x ==> %d\n", x);
    x *= 2;
    printf("double_num after: x ==> %d\n", x);
}
