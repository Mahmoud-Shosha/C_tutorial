#include <stdio.h>

int main(void)
{
    int i = 0;
    char s[50];

    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=10);

    do
    {
        printf("Enter 'x' to exit ==> ");
        scanf("%s", s);
        if (s[0] == 'x')
        {
            break;
        }
    } while (1);


    return 0;
}