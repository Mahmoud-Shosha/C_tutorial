#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    char *new;

    fgets(s, 20, stdin);
    new = strstr(s, "ud");
    if (new == NULL)
    {
        printf("not found !\n");
    }
    else
    {
        printf("%s", new);
    }

    return 0;
}
