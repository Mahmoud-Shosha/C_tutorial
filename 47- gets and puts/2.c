#include <stdio.h>

int main()
{
    char s[10];

    printf("Enter your full name : ");
    fgets(s, 10, stdin);
    printf("your name is ==> %s\n", s);

    return 0;
}
