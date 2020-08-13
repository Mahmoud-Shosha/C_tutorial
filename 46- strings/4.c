#include <stdio.h>
#include <stdlib.h>

int main()
{
    char message[] = "Mahmoud";

    printf("%s\n", message);

    // message = "Sami"; // error
    message[0] = 'S'; // error

    printf("%s\n", message);

    return 0;
}
