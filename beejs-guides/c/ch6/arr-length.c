#include <stdio.h>

int main(void)
{
    int x[12];

    printf("%zu\n", sizeof(x));
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(x) / sizeof(int));
}