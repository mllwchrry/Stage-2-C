#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {

    if (n == 0) return 0;

    const unsigned char *tmp1 = s1;
    const unsigned char *tmp2 = s2;

    unsigned int i;
    for (i = 0; tmp1[i] == tmp2[i] && i !=n; i++)
        if (tmp1[i] == '\0' && tmp2[i] == '\0')
            return 0;

    return tmp1[i] - tmp2[i];
}
