#include <stdio.h>
#include <string.h>

typedef struct Employee
{
    char name[20];
} Employee;

void func1(Employee e)
{
    strcpy(e.name, "Sami");
}

void func2(Employee *e)
{
    strcpy(e->name, "Sami");
}

int main()
{
    Employee e;

    strcpy(e.name, "Mahmoud");

    func1(e);
    printf("In main: Employee name: %s\n", e.name);

    func2(&e);
    printf("In main: Employee name: %s\n", e.name);

    return 0;
}
