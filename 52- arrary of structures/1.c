#include <stdio.h>

typedef struct Student
{
    int id;
    char name[20];
} Student;

int main()
{
    Student stdudent_arr[3];

    printf("sizeof(Student) ==> %ld\n", sizeof(Student));
    printf("sizeof(stdudent_arr) ==> %ld\n", sizeof(stdudent_arr)); // 24 + 24 + 24

    printf("\n___Entering data___\n");
    for (int i = 0; i < 2; i++)
    {
        printf("id of student number %d ==>", i);
        scanf("%d", &stdudent_arr[i].id);
        printf("name of student number %d ==>", i);
        scanf("\n");
        fgets(stdudent_arr[i].name, 20, stdin);
        printf("\n");
    }

    printf("\n___Displaying data___\n");
    for (int i = 0; i < 2; i++)
    {
        printf("id of student number %d ==> %d\n", i, stdudent_arr[i].id);
        printf("name of student number %d ==> %s", i, stdudent_arr[i].name);
        printf("\n");
    }

    return 0;
}
