#include <stdio.h>

int main(void)
{
    int i;
    int *p; // this is NOT a dereference this is a type int

    p = &i; // p now points to i, p holds address of i

    i = 10; // i is 10
    *p = 20; // the thing p points to (i) is now 20

    printf("i is %d\n", i); // prints 20
    printf("i is %d\n", *p); // p points to i so this will also print 20
}