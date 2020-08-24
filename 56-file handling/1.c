#include <stdio.h>

int main()
{
    FILE *fp;
    char c;

    fp = fopen("1.c", "r");

    while (1)
    {
        c = getc(fp);
        if (c == EOF)
            break;
        printf("%c", c);
    }

    fclose(fp);

    return 0;
}
