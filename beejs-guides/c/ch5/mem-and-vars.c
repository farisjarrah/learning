#include <stdio.h>

int main(void)
{
    printf("an int uses %zu bytes of memory\n", sizeof(int));

    int i = 10;

    printf("The value of i is %d\n", i);
    printf("And its address is %p\n", (void *)&i);

    // %p expects the argument to be a pointer to void
    // so we cast it to make the compiler happy
}