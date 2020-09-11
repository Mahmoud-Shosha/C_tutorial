#include <stdio.h>

#define PI 3.14
#define MIN(a, b) ((a > b) ? b : a)

int main()
{
    printf("PI ==> %g\n", PI);
    printf("MIN(5, 10) ==> %d\n", MIN(5, 10));

    printf("\n__C Predefined Macros__\n");
    printf("__TIME__ ==> %s\n", __TIME__);
    printf("__DATE__ ==> %s\n", __DATE__);
    printf("__FILE__ ==> %s\n", __FILE__);
    printf("__LINE__ ==> %d\n", __LINE__);
    printf("__STDC__ ==> %d\n", __STDC__);


    return 0;
}
