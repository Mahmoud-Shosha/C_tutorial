#include <stdio.h>

int main()
{
    FILE *fp;
    char str[100];

    fp = fopen("myfile.txt", "w");
    fputs("My name is Mahmoud.", fp);
    fclose(fp);


    fp = fopen("myfile.txt", "r");
    fgets(str, 100, fp);
    printf("%s", str);
    fclose(fp);


    return 0;
}
