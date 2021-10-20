#include "libmx.h"

char *mx_strtrim(const char *str) {

    if (str == NULL)
        return NULL;
    int s_i = 0;
    int e_i = mx_strlen(str) - 1;

    while (mx_isspace(str[s_i]))
        s_i++;

    while (mx_isspace(str[e_i]))
        e_i--;

    int l = e_i - s_i + 1;

    char *result = mx_strnew(l);
    mx_strncpy(result, (str + s_i), l);

    return result;

}
