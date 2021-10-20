#include "libmx.h"

char *mx_file_to_str(const char* file) {
    int f_d = open(file, O_RDONLY);
    if (f_d < 0) {
        close(f_d);
        return NULL;
    }

    int length = mx_file_length(file);
    if (length == 0) return NULL;

    char *res = mx_strnew(length);
    length = read(f_d, res, length);

    close(f_d);
    return res;
}
