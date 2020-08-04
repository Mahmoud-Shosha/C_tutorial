#include <stdio.h>

int auto_var(void)
{
    int counter = 0;
    counter++;
    return counter;
}

int static_var(void)
{
    // Static variables are allocated memory in data segment, not stack segment.
    static int counter; // like global vars, init with 0
    counter++;
    return counter;
}

int main(void)
{
    printf("%d\n", auto_var());
    printf("%d\n", auto_var());
    printf("%d\n\n", auto_var());

    printf("%d\n", static_var());
    printf("%d\n", static_var());
    printf("%d\n", static_var());

    return 0;
}