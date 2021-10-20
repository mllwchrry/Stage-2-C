#include "libmx.h"

char *mx_strchr(const char *str, int c) {
    char *res = NULL;
    do {
        if (*str == c) {
            res = (char *)str;
            return res;
        }
    } while (*str++);

    return res;
}
