#include <stdio.h>


void print_file(FILE *fp)
{
    char c;
    while(1)
    {
        c = fgetc(fp);
        if (c == EOF) break;
        printf("%c", c);
    }
}

int main()
{
    FILE *fp;

    fp = fopen("myfile.txt", "r");

    printf("%ld\n", ftell(fp));
    print_file(fp);
    print_file(fp);
    print_file(fp);
    printf("%ld\n", ftell(fp));
    printf("---------------------------------------\n");

    fseek(fp, 0, SEEK_SET);
    printf("%ld\n", ftell(fp));
    print_file(fp);
    print_file(fp);
    print_file(fp);
    printf("%ld\n", ftell(fp));
    printf("---------------------------------------\n");

    rewind(fp);
    printf("%ld\n", ftell(fp));
    print_file(fp);
    print_file(fp);
    print_file(fp);
    printf("%ld\n", ftell(fp));
    printf("---------------------------------------\n");


    fclose(fp);

    return 0;
}
