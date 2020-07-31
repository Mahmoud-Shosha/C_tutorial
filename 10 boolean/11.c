#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool x[2] = {true, false};
    
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", x[i]);
    }


    printf("\nLogical operators:\n");
    bool a = true, b = false;
    printf("a && b ==> %d\n", a && b);
    printf("a || b ==> %d\n", a || b);
    printf("!a ==> %d\n", !a);

    return 0;
}