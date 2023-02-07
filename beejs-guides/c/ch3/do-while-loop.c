#include <stdio.h>

int main(void)
{
    int i = 10;
    while (i < 10) {
        printf("while i is %d\n", 1);
        i++;
    }

    i = 10;
    do {
        printf("do-while: i is %d\n", i);
        i++;
    } while ( i < 10 );
    printf("All done! %d\n", i);
}