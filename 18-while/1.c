#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i<=10)
    {
        printf("%d\n", i);
        i++;
    }

    printf("\n");
    i = 0;
    while (i++, i<=10)    // while (i<=10, i++) ==> error
    {
        printf("%d\n", i);
    }

    printf("\n");
    char s[50];
    while (1)
    {
        printf("Enter 'x' to exit ==> ");
        scanf("%s", s);
        if (s[0] == 'x')
        {
            break;
        }
    }


    return 0;
}