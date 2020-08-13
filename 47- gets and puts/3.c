#include <stdio.h>

int main()
{
    char s[] = "four";

    int n;

    // writes a string to stdout up to but not including the null character. A newline character is appended to the output.
    n = puts(s);

    printf("%d\n", n);

    return 0;
}
