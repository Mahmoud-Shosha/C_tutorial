#include <stdio.h>
#include <string.h>



typedef union Student
{
    int id;
    char name[50];

} Student;


int main()
{
    Student s;
    s.id = 512;
    strcpy(s.name, "Mahmoud Shosha");

    printf("sizeof(Student) ==> %ld\n", sizeof(Student));
    printf("s.id ==> %d\n", s.id);
    printf("s.name ==> %s\n", s.name);

    return 0;
}
