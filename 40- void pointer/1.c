#include <stdio.h>  


int main()
{
    void *p;
    int *ip;

    printf("size of p ==> %ld\n", sizeof(p));
    printf("p ==> %p\n", p);
    printf("++p ==> %p\n", ++p);
    printf("size of ip ==> %ld\n", sizeof(ip));
    printf("ip ==> %p\n", ip);
    printf("++ip ==> %p\n", ++ip);


    return 0;
}