#include <stdio.h>
#include <stdlib.h>

int main()
{
    char message[20];

    printf("Enter your message : ");
    scanf("%s", message);
    printf("Your message is \"%s\"\n\n", message);

    return 0;
}
