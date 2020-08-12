#include <stdio.h>  

void func1(void (*func)());
void func2();

int main()
{
    func1(func2);

    return 0;
}

void func1(void (*func)())
{
    printf("Func1\n");
    func();
}

void func2()
{
    printf("Func2\n");
}