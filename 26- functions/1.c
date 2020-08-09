#include <stdio.h>

void hello(void);
int get(int);


int main(void)
{
    // without return value
    hello();

    // with return value
    int x;
    x = get(10);
    printf("%d\n", x);

    // int y;
    // y = hello();  // ERROR

    return 0;
}


void hello(void)
{
    printf("Hello\n");
}

int get(int x)
{
    return x;
}