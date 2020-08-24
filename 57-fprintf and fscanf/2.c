#include <stdio.h>

int main()
{
    FILE *fp;
    char c[100];

    fp = fopen("db", "r");

    fscanf(fp, "%s", c);
    printf("%s", c);

    fclose(fp);

    return 0;
}
