#include <stdio.h>

int main(void){
    int i = 0;
    for (i = 0; i < 10 ; i++) {
        printf("i is %d\n", i);
    }

    int j = 999;

    for (i = 0, j = 999; i < 10; i++, j--) {
        printf("%d, %d\n", i, j);
    }

    // empty for loop that runs forever
    //for (;;) {
    //    printf("I will print this again and again and again\n");
    //   printf("for all eternity or until you hit ctrl-c\n");
    //}
}