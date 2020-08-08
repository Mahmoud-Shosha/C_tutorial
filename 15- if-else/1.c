#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int value;

    printf("Enter a value : \n");

    while (true)
    {
        scanf("%d", &value);
        if (value % 2 == 0)
        {
            printf("EVEN VALUE\n");
        }
    }

    return 0;
}