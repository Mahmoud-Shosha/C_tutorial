#include <stdio.h>  


int main()
{
    int x = 20;
    int *p = &x;
    int **pp = &p;

    printf("%d\n", *p);
    printf("%p\n", *pp);
    printf("%p\n", p);
    printf("%d\n", **pp);

    return 0;
}