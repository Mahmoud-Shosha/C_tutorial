#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("db", "w");

    fprintf(fp, "ID, NAME, AGE");
    fprintf(fp, "\n");
    fprintf(fp, "%ld, %s, %d", (long)0, "Mahmoud", 23);
    fprintf(fp, "\n");

    fclose(fp);

    return 0;
}
