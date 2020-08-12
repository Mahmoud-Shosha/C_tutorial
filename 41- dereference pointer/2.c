#include <stdio.h>  


int main()
{
    int x = 5;
    int *p1, *p2;
    p1 = &x;
    p2 = &x;

    printf("%d\n", x);

    *p1 = 1;
    printf("%d\n", x);

    *p2 = 2;
    printf("%d\n", x);


    return 0;
}