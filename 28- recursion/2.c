#include <stdio.h>

unsigned long fibonacci(int);


int main(void)
{

    int num;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("The fibonacci is : %lu\n\n", fibonacci(num));
    }


    return 0;
}


unsigned long fibonacci(int num)
{
    if (num == 0) return 0;
    if (num == 1) return 1;
    return fibonacci(num - 1) + fibonacci(num - 2);
}
