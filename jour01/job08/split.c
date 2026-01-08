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

int count_words(const char *str)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        while (str[i] != '\0' && is_space(str[i]))
            i++;
        if (str[i] != '\0') {
            count++;
            while (str[i] != '\0' && !is_space(str[i]))
                i++;
        }
    }

    return count;
}

char **split(const char *str)
{
    int i = 0, j = 0, k = 0;
    int words = count_words(str);

    char **result = (char **)malloc((words + 1) * sizeof(char *));
    if (result == NULL)
        return NULL;

    while (str[i] != '\0') {
        while (str[i] != '\0' && is_space(str[i]))
            i++;

        if (str[i] != '\0') {
            int start = i;

            while (str[i] != '\0' && !is_space(str[i]))
                i++;

            int len = i - start;

            result[k] = (char *)malloc(len + 1);
            if (result[k] == NULL)
                return NULL;

            for (j = 0; j < len; j++)
                result[k][j] = str[start + j];
            result[k][len] = '\0';

            k++;
        }
    }

    result[k] = NULL;

    return result;
}