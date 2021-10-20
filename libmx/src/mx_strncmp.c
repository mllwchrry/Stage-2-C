#include "libmx.h"

int mx_strncmp(const char *s1, const char *s2, int len) {
    for (int i = 0;  i < len && s1[i] != '\0'; i++)
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    return 0;
}
