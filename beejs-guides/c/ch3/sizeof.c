#include <stdio.h>

int main(void){
    int a = 999;
    int z = 9999;
    char *s = "stegosaurousssssssssssss";
    printf("%zu\n", sizeof a);
    printf("%zu\n", sizeof z);
    printf("%zu\n", sizeof s);
    printf("%zu\n", sizeof(2 + 7));
    printf("%zu\n", sizeof 3.14);
}