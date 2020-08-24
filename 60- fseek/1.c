#include <stdio.h>

int main()
{
    FILE *fp;
    char str[500];

    fp = fopen("myfile.txt", "r");

    fseek(fp, 2, SEEK_SET);
    fgets(str, 200, fp);
    printf("%s", str);

    fseek(fp, 3, SEEK_CUR);
    fgets(str, 200, fp);
    printf("%s", str);

    fseek(fp, -10, SEEK_END);
    fgets(str, 500, fp);
    printf("%s", str);

    fclose(fp);

    return 0;
}
