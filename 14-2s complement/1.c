#include <stdio.h>

int main(void)
{
    printf("%d\n", ~5);     // ~ 0000 0101 ==> 1111 1010
    printf("%d\n", ~5 + 1); //   1111 1011

    printf("%d\n", -5); // 1111 1011

    return 0;
}