#include <stdio.h>

void func(void);

char* name = "Mahmoud";
extern char* city; // not optional ==> undeclared identifier

int main(void)
{

    int x = 10; // auto variable
    int y = 20; // auto variable
    printf("%d, %d\n", x, y);

    func();
    func();
    func();

    // register variable 
    register char c = 'Z';
    printf("\n%c\n", c);

    // extern variable
    extern char* name; // optional 
    printf("%s\n", name);
    printf("%s\n", city);

    return 0;
}

void func(void)
{
    static int counter; // static variable
    printf("%d\t", ++counter);
}