#include <stdio.h>

void increment(int *p) // accepts pointer to int
{
    *p = *p + 1;
}

int main(void)
{
    int i = 10;
    int *j = &i; // int j points to the address-of i

    printf("i is %d\n", i);
    printf("i is also %d\n", *j); // both this line and above print 10

    increment(j); // j is in int* to i

    printf("i is %d\n", i); // prints 11

    increment(&i);

    printf("i is %d, j is %d\n", i, *j);

    int z = 0;
    scanf("%d", &z);
    printf("z is %d\n", z); // scanf() dereferences the pointer we pass it in order to modify the variable it points to.
}