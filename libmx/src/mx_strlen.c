#include "libmx.h"

int mx_strlen(const char *s) {
    int len = 0;
    const char *tmp = s;
    while (*tmp) {
        len++;
        tmp++;
    }
    return len;
}
