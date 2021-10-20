#include "libmx.h"

int mx_count_letters(const char *s, char c) {
    int i;
    for (i = 0; s[i] && s[i] != c; i++) {}
    return i;
}
