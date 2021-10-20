#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {

    if (!str) return NULL;
    char *res = NULL;

    char *str_without_spaces = mx_strnew(mx_strlen(str));

    for (int i = 0, j = 0; str[i]; i++) {
        if (!(mx_isspace(str[i]))) {
            str_without_spaces[j] = str[i];
            j++;
        }
        if (!(mx_isspace(str[i])) && mx_isspace(str[i + 1])) {
            str_without_spaces[j] = ' ';
            j++;
        }
    }
    res = mx_strtrim(str_without_spaces);
    mx_strdel(&str_without_spaces);
    return res;
}
