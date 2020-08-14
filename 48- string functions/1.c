#include <stdio.h>
#include <string.h>

int main()
{
    printf("%ld\n", strlen("four")); // without null

    char s1[20] = "Mahmoud";
    char s2[] = "Sami";

    strcpy(s1, s2);
    printf("%s\n", s1);
    printf("%s\n", s2);

    strcpy(s1, "Mahmoud");
    strcat(s1, s2);

    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}
