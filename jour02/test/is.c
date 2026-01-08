#include <stdio.h>

int is_lower(char c){
    return 'a' <= c && c <= 'z';
}

int is_upper(char c){
    return 'A' <= c && c <= 'Z';
}

int is_alpha(char c){
    return is_lower(c) || is_upper(c);
}

int main(void){
    printf("%d ", is_lower('z'));
    printf("%d ", is_lower('T'));
    printf("%d\n", is_lower('8'));

    printf("%d ", is_upper('z'));
    printf("%d ", is_upper('T'));
    printf("%d\n", is_upper('8'));

    printf("%d ", is_alpha('z'));
    printf("%d ", is_alpha('T'));
    printf("%d\n", is_alpha('8'));
    return 0;
}