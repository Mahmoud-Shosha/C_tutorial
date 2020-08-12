#include <stdio.h>  

int func1(void)
{
    return 1;
}

int func2(void)
{
    return 2;
}

int func3(void)
{
    return 3;
}

void print(int (*p)(void))
{
    printf("%d\n", (*p)());
}

int main()
{
    print(func1);
    print(func2);
    print(func3);

    return 0;
}

