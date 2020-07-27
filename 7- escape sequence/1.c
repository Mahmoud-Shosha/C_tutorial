#include <stdio.h>

int main(void)
{
    printf("\a");                   // \a
    printf("Hello Geeks\b\b\b\bF"); // \b
    printf("\n");                   // \n
    printf("--\t--");               // \t
    printf("\v--\n");               // \v
    printf("****\reeeeee\n");       // \r
    printf("sami\\ss\'\"\?\n");
    printf("sami\f");        // \f
    printf("Ahmed \0 Sami"); // \0 ==> end of string

    printf("\n%s\n", "\075"); // \nnn ==> octal value equvalent character
    printf("\n%s\n", "\141\142");

    printf("\n%s\n", "\x61\x62\x63"); // \xhh ==> hex value equvalent character

    return 0;
}