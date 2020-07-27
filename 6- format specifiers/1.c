#include <stdio.h>

int main(void)
{
    // signed integer %d or %i
    printf("%d\n", 25);
    printf("%d\n", -25);
    printf("%i\n", 25);
    printf("%i\n\n", -25);

    // unsigned integer %u
    printf("%u\n", 25);
    printf("%u\n\n", -25);

    // unsigned octal integer %o
    printf("%o\n", 010);
    printf("%d\n\n", 010);

    // unsigned hexa integer %x %X
    printf("%x\n", 0xb);
    printf("%X\n", 0xb);
    printf("%d\n\n", 0xB);

    // signed floating-point %f
    printf("%f\n", 2.3);
    printf("%f\n\n", -2.3);

    //exact signed floating-point %g
    printf("%g\n", 2.3);
    printf("%g\n\n", -2.3);

    // scientific notation %e or %E
    printf("%e\n", 2.3e+5);
    printf("%e\n", -2.3);
    printf("%E\n", 2.3);
    printf("%E\n\n", -2.3);

    // address in hexa %p
    int num;
    printf("%p\n\n", &num);

    // unsigned character %c
    printf("%c\n", 'f');
    printf("%d\n", 'f');
    printf("%c\n\n", 102);

    // string %s
    printf("%s\n\n", "My name is Ali !");

    // long int %ld
    printf("%ld\n\n", 112233445566);

    // long double %ld
    printf("%Lf\n\n\n", (long double)112233445566.0);

    // Minimum Field Width Specifier
    printf("--%5d--\n", 555);
    printf("--%05d--\n", 555);
    printf("--%-5d--\n\n", 555);

    // Specifying Precision
    printf("--%5f--\n", 22.55);
    printf("--%15f--\n", 22.55);
    printf("--%015f--\n", 22.55);
    printf("--%-15f--\n", 22.55);
    printf("--%.2f--\n", 22.55);
    printf("--%7.2f--\n", 22.55);

    return 0;
}