#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {

    if (!s) return NULL;

    unsigned char *tmp = (unsigned char *)s;
    for (; n > 0; n--) {
        if (*tmp == (unsigned char)c)
            return tmp;
        tmp++;
    }

    return NULL;
}
