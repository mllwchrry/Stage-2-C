#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    int needle_len = mx_strlen(needle);
    int haystack_len = mx_strlen(haystack);

    for (int i = 0; i < haystack_len; i++, haystack++) {

        char *buf = mx_strchr(haystack, haystack[0]);
        if (mx_strncmp(buf, needle, needle_len) == 0)
            return (char*)haystack;
    }
    return NULL;
}
