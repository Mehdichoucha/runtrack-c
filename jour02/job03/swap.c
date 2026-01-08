#include <stdio.h>
#include <stdlib.h>

void super_divide(int ********** val){

}

int main(void) {
    int i = 16;
    int* pi = i;
    int** ppi = &pi;
    int*** pppi = &ppi;
    int**** ppppi = &pppi;
    int***** pppppi = &ppppi;

    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}