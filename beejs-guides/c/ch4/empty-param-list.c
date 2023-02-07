#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void foo(void); //ensure you put void in the function prototype to avoid having an empty param list if there are no params

void foo(void)
{
    printf("Hello, World!\n");
}

int main(void)
{
    foo();
}