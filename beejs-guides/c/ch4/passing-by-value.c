#include <stdio.h>

void increment(int a)
{
    a++;
}

int main(void)
{
    int i = 10;
    increment(i);
    printf("i == %d\n", i);
}

// This example purposefully does not work to illustrate that you can not simply alter a variable by passing it into an arbitrary function. You must actually act on the variable.