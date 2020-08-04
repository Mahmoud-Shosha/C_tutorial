#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age;

    printf("Enter your age :");
    scanf("%d", &age);

    bool ok = (age >= 18) ? true : false;

    printf("ok ==> %s\n", ok ? "true" : "false");

    return 0;
}