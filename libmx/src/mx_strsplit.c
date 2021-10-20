#include "libmx.h"

char **mx_strsplit(const char *s, char c) {

    if (!s) return NULL;

    int w_len = 0;
    char **res = NULL;
    int i = 0;


    res = (char **)malloc((mx_count_words(s, c) + 1) * sizeof(char *));

    while ((*s != '\0') && (*s)) {
        if (*s != c) {
            w_len = mx_count_letters(s, c);
            res[i] = mx_strndup(s, w_len);
            i++;
            s += w_len;
            continue;
        }
        s++;
    }

    res[i] = NULL;
    return res;
}
