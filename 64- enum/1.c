#include <stdio.h>

enum status
{
    true,
    false
};
// enum status
// {
//     true,
//     false
// } s;

// enum status s;

typedef enum status STATUS;

int main(void)
{
    STATUS s = false;

    printf("s ==> %d\n", s);

    return 0;
}
