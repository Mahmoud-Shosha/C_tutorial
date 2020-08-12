#include <stdio.h>  


int main()
{
    int *p1 = (int*)0;
    int *p2 = NULL;
    int *p3= '\0';
    char *p4 = 0;

    printf("%p\n", p1);
    printf("%p\n", p2);
    printf("%p\n", p3);
    printf("%p\n", p4);


    return 0;
}