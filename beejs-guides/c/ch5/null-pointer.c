#include <stdio.h>

int main(void)
{
    int *p = NULL;
    *p = 12; // CRASH BAD DONT DO THIS
}