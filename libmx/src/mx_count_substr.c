#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int subs = 0;

    if (str&& sub) {
        if (mx_strlen(sub) <= mx_strlen(str))
            while (*str) {
                if (!mx_strncmp((char *)str, (char *)sub, mx_strlen(sub)))
                    subs++;
                str++;
            }
        return subs;
    }

    return -1;
}
