#include <stdio.h>

int main(void)
{
    char a = 'a';
    printf("%c --> %ld Bytes (char)\n", a, sizeof(a));
    short b = 55;
    printf("%d --> %ld Bytes (short)\n", b, sizeof(b));
    int c = 555;
    printf("%d --> %ld Bytes (int)\n", c, sizeof(c));
    long d = 999888777;
    printf("%ld --> %ld Bytes (long)\n", d, sizeof(d));
    float e = 555;
    printf("%f --> %ld Bytes (float)\n", e, sizeof(e));
    double f = 999888777;
    printf("%f --> %ld Bytes (double)\n", f, sizeof(f));
    long double g = 999888777;
    printf("%Lf --> %ld Bytes (long double)\n", g, sizeof(g)); // L not l

    return 0;
}