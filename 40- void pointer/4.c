#include <stdio.h>  
#include <stdlib.h>


int main()
{
    int x = 5;
    char c = 'A';
    void *vp;
    int *ip;

    vp = &x;
    printf("%d\n", *(int*)vp);

    vp = &c;
    printf("%c\n", *(char*)vp);

    ip = &x;
    printf("%d\n", *ip);

    ip = &c;
    printf("%c\n", *(char*)ip);


    return 0;
}