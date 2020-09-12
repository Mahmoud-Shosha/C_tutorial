#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("argc ==> %d\n", argc);

    printf("The file name (argv[0]) ==> %s\n", argv[0]);

    for (int i = 1; i < argc; i++)
    {
        printf("The args (argv[i]) ==> %s\n", argv[i]);
    }

    return 0;
}
