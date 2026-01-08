#include <stdlib.h>

int my_strlen(const char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

char *my_strdup(const char *str)
{
    int len = my_strlen(str);
    char *copy = (char *)malloc(len + 1);

    if (copy == NULL)
        return NULL;

    for (int i = 0; i <= len; i++)
        copy[i] = str[i];

    return copy;
}
