#include <stdio.h>  

float func(float);

int main()
{
    printf("The address of main() function is %p\n", main);

    printf("Return value of func(2.3) ==> %g\n", func(2.3));

    // declaring a function pointer
    float (*ptr)(float);
    ptr = func;

    printf("Return value of (*ptr)(2.3) ==> %g\n", (*ptr)(2.3)); // recommended
    printf("Return value of (2.3) ==> %g\n", ptr(2.3));



    return 0;
}

float func(float x)
{
    return x * 2;
}
