#include "libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    ssize_t current_b;
    size_t res_bs = 0;

    char *buf = *lineptr;
    char ch;

    if (!buf || buf_size <= 0) return -1;

    while(true) {

        current_b = read(fd, &ch, 1);
        if (current_b == -1)
            return -1;

        else if (current_b == 0) {
            if (res_bs == 0)
                return -1;
            else
                break;
        }
        else {

            if (ch == delim)
                break;
            if (res_bs <= buf_size) {
                res_bs++;
                *buf++ = ch;
            }
        }
    }
    *buf = '\0';
    return res_bs;
}
