#include <stdio.h>

extern int y; // gloal variable (declare a external variable) ==> like using a library function

void func(void);

int main(void)
{
    printf("External variable %d\n\n", y);
    func();
    func();
    func();

    return 0;
}

void func(void)
{
    int x = 10;        // local variable == auto int x = 10;
    static int z = 10; // static variable

    x *= 2;
    z *= 2;

    printf("x is %d\n", x);
    printf("z is %d\n", z);
}
