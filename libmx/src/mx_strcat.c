#include "libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
    int len_s1 = mx_strlen(s1);
    int len_s2 = mx_strlen(s2);
    int i;
    int j;

    for (i = len_s1, j = 0; i < (len_s1 + len_s2); i++, j++)
        s1[i] = s2[j];

    s1[i] = '\0';
    return s1;
}
