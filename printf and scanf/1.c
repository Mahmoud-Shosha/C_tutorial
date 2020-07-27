#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Cube of %d is %d\n", num, num * num * num);

    return 0;
}
