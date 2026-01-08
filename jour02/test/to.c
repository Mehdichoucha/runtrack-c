#include <stdio.h>
#include "is.c"

int is_upper(char c){
    return 'A' <= c && c <= 'Z';
}

char to_lower(char c) {
    if (is_upper(c)) {
        return c + 32;
    }
    return c;
}

int main(void){
    printf("%c\n", to_lower('z'));
    printf("%c\n", to_lower('T'));
    printf("%c", to_lower('%'));
    return 0;
}