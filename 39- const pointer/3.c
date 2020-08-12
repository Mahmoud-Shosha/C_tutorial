#include <stdio.h>  


int main()
{
    const int x = 50, y = 20;
    const int *const ptr = &x; // constant pointer to a constant variable

    ptr = &y;  //error

    *ptr = 70;  // error



    return 0;
}