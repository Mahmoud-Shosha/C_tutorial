#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int marks;

    printf("Enter you marks : \n");

    while (true)
    {
        scanf("%d", &marks);
        if (marks >= 85)
        {
            printf("You are ==> A\n");
        }
        else if (marks >= 60)
        {
            printf("You are ==> B\n");
        }
        else if (marks >= 40)
        {
            printf("You are ==> C\n");
        }
        else
        {
            printf("You are ==> FAILS\n");
        }
    }

    return 0;
}