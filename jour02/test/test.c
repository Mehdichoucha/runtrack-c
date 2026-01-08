//malloc printf free
#include <stdlib.h>
#include <stdio.h>

int main (void) {
    void *test = malloc(1024 * 3);
    printf("%p", test);
    free(test);
    return 0;
}