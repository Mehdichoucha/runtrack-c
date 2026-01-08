#include <stdio.h>
#include <stdlib.h>

void divide(int* val){
    *val /= 2;
}

int main(void){
    int i = 16;
    printf("%d", i);
    divide(&i);
    printf("%d", i);
    return 0;
}