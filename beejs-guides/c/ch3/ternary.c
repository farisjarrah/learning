#include <stdio.h>

int main(void){
    int x = 11;
    int y = 1;
    y += x> 10? 10: 37;
    printf("this is y: %d\n", y);
    printf("the variable x is %d and is %s.\n", x, x % 2 == 0? "even": "odd");
}