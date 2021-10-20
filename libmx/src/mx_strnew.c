#include "libmx.h"

char *mx_strnew(const int size) {
    if (size < 0)
        return NULL;
    char *newstr = (char *)malloc(size + 1);
    if (newstr != NULL) {
        for (int i = 0; i <= size; i++)
            newstr[i] = '\0';
        return newstr;
    }
    return NULL;
}
