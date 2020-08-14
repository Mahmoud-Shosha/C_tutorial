#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
} emp1, emp2;

int main()
{
    struct Employee emp3, emp4;

    printf("sizeof(struct Emplye) ==> %ld\n", sizeof(struct Employee)); // 4 + 20 + 4
    printf("sizeof(emp1) ==> %ld\n", sizeof(emp1)); // 4 + 20 + 4
    printf("sizeof(emp3) ==> %ld\n", sizeof(emp3)); // 4 + 20 + 4

    emp4.id = 4;
    strcpy(emp4.name, "Sami Ali");
    emp4.salary = 25000;

    printf("id: %d, name: %s, salary: %g\n", emp4.id, emp4.name, emp4.salary);

    return 0;
}
