#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    if (!s1 && !s2) return NULL;
    else if (!s1) return mx_strdup(s2);
    else if (!s2) return mx_strdup(s1);
    else {

        int len_s1 = mx_strlen(s1);
        int len_s2 = mx_strlen(s2);

        char *res = mx_strnew(len_s1 + len_s2);

        res = mx_strcpy(res, s1);
        res = mx_strcat(res, s2);
        return res;
    }
}
