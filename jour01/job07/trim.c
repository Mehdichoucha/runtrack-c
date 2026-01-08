#include <stdlib.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

int my_strlen(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

char *trim(const char *str)
{
    int start = 0;
    int end = my_strlen(str) - 1;

    while (str[start] != '\0' && is_space(str[start]))
        start++;

    if (str[start] == '\0') {
        char *empty = (char *)malloc(1);
        if (empty != NULL)
            empty[0] = '\0';
        return empty;
    }

    while (end >= start && is_space(str[end]))
        end--;

    int len = end - start + 1;

    char *copy = (char *)malloc(len + 1);
    if (copy == NULL)
        return NULL;

    for (int i = 0; i < len; i++)
        copy[i] = str[start + i];

    copy[len] = '\0';
    return copy;
}