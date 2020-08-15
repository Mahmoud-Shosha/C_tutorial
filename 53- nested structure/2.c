#include <stdio.h>
#include <string.h>

typedef struct Employee
{
    char name[20];
    struct Date
    {
        int day;
        int month;
        int year;
    } birth_date;
} Employee;

int main()
{
    Employee e;

    strcpy(e.name, "Mahmoud Shousha");
    e.birth_date.day = 1;
    e.birth_date.month = 6;
    e.birth_date.year = 1997;

    printf("size of Employee: %ld\n", sizeof(Employee));
    printf("Employee name: %s\n", e.name);
    printf("Employee name birth_date : %d/%d/%d\n", e.birth_date.day, e.birth_date.month, e.birth_date.year);

    return 0;
}
