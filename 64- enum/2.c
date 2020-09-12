#include <stdio.h>

typedef enum DAY
{
    sunday = 1,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
} DAY;

int main(void)
{
    DAY d = tuesday;

    printf("s ==> %d\n", d);

    for (DAY i = sunday; i <= saturday; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
