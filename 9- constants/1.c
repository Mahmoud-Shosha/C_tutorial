#include <stdio.h>

int main(void)
{
    // list of constant values (literals)
    printf("%d\n", 10);
    printf("%g\n", 10.5);
    printf("%o\n", 077);
    printf("%x\n", 0xf4f);
    printf("%c\n", 'a');
    printf("%s\n", "C Programming");

    // Using const keyword (and #define preprocessor)
    const float PI = 30.14;
    // PI = 50;  // render compile time error.

    printf("PI ==> %g\n", PI);

    return 0;
}