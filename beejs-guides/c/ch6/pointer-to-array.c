#include <stdio.h>

int main(void)
{
    int a[5] = {11, 22, 33, 44, 55};

    int *p;
    //p = &a[0];
    p = a; // this is the same thing as the previous line. Its a shortcut c provides

    printf("%d\n", *p);

}