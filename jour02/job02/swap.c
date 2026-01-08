#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a = 5, b = 3, temp;

    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}