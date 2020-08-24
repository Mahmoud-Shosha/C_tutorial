#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("db", "w");
    fputc('M', fp);
    fclose(fp);

    fp = fopen("db", "r");
    printf("'%c'\n", fgetc(fp));
    fclose(fp);

    return 0;
}
