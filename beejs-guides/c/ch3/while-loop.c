#include <stdio.h>

int main(void){
    int i = 0;
    while (i < 10) {
        printf("i is now %d!\n", i);
        i++;
    }
    printf("All done!\n");
    printf("Time for forever loop!\n");

    //while (1) {
    //    printf("1 is true so this will repeat forever.\n");
    //}
}