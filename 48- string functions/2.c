#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10] = "sa";
    char s2[20] = "sa";

    printf("%d\n", strcmp(s1, s2));

    strcpy(s2, "as");

    printf("%d\n", strcmp(s1, s2));

    return 0;
}
