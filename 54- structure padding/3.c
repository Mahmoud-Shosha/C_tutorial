#include <stdio.h>

struct Student1
{
    char a;
    char b;
    int c;

}__attribute__((packed));
typedef struct Student1 Student1;

typedef struct Student2
{
    char a;
    int c;
    char b;

} Student2;

typedef struct Student3
{
    char a;
    long c;
    char b;

} Student3;


int main()
{
    printf("%ld\n", sizeof(Student1));
    printf("%ld\n", sizeof(Student2));
    printf("%ld\n", sizeof(Student3));

    return 0;
}
