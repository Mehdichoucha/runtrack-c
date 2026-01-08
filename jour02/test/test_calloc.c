//malloc printf free
#include <stdlib.h>
#include <stdio.h>

void *my_calloc(int size) {
    char *tmp = malloc(size);

    for (int i = 0; i < size; i++) {
        tmp[i] = 0;
    }

    return tmp;
}

int main (void) {
    void *test = malloc(1024 * 5);
    printf("%p", test);

    for (int i = 0; i < 20; i++) {
        printf("%d ", test[i]);
    }

    free(test);
    return 0;
}