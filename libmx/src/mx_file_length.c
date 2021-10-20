#include "libmx.h"

int mx_file_length(const char *file) {
    int f_d = open(file, O_RDONLY);
    if (f_d < 0) {
        close(f_d);
        return 0;
    }
    int length = 0;
    char buffer;
    int byte = read(f_d, &buffer, 1);

    while (byte > 0) {
        byte = read(f_d, &buffer, 1);
        length++;
    }
    close(f_d);
    return length;
}
