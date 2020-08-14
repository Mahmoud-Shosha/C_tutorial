#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char name[20];
    int age;
} Student;

// typedef struct Student Student;  // another method

int main()
{
    typedef unsigned int uint;
    uint x = 50;
    printf("%d\n", x);

    Student s;
    printf("Enter student name: ");
    fgets(s.name, 20, stdin);
    printf("Enter student age: ");
    scanf("%d", &s.age);
    printf("Name: %sAge: %d\n", s.name, s.age);

    return 0;
}
