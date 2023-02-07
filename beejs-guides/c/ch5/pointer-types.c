#include <stdio.h>

int main(void)
{
    int i;
    int *p; // p is a pointer, but is uninitialized and points to garbage

    p = &i; // p is assigned the address of i--p now "points to" i

    i = 10;

    printf("this is p %d\n", *p);
}