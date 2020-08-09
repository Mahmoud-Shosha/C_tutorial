#include <stdio.h>

unsigned long fact(int);


int main(void)
{

    int num;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("The factorial is : %lu\n\n", fact(num));
    }


    return 0;
}


unsigned long fact(int num)
{
    if (num == 0 || num == 1) return 1;
    return num * fact(num - 1);
}
