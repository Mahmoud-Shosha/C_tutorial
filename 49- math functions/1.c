#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("__ceil__\n");
    printf("ceil(3.2) ==> %f\n", ceil(3.2));
    printf("ceil(3.8) ==> %f\n", ceil(3.8));

    printf("__floor__\n");
    printf("floor(3.2) ==> %f\n", floor(3.2));
    printf("floor(3.8) ==> %f\n", floor(3.8));

    printf("\n__sqrt__\n");
    printf("sqrt(3.2) ==> %f\n", sqrt(3.2));
    printf("sqrt(25) ==> %f\n", sqrt(25));

    printf("\n__sqrt__\n");
    printf("sqrt(3.2) ==> %f\n", sqrt(3.2));
    printf("sqrt(25) ==> %f\n", sqrt(25));

    printf("\n__pow__\n");
    printf("pow(3, 2) ==> %f\n", pow(3, 2));
    printf("pow(2.5, 5) ==> %f\n", pow(2.5, 5));

    printf("\n__abs__\n"); // in stdlib
    printf("abs(5) ==> %d\n", abs(5));
    printf("abs(-2) ==> %d\n", abs(-2));

    return 0;
}
