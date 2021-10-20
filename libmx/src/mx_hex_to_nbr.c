#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {

    unsigned long nbr = 0;
    unsigned long b = 1;
    int l = 0;

    if (hex == NULL)
        return 0;

    while(hex[l])
        l++;

    for (int i = 0; i < l + 1; i++) {
        const char c = hex[l - i];
        if (c >= 48 && c <= 57) {
            nbr += (c - 48) * b;
            b *= 16;
        }
        else if (c >= 97 && c <= 102) {
            nbr += (c - 87) * b;
            b *= 16;
        }
        else if (c >= 65 && c <= 70) {
            nbr += (c - 55) * b;
            b *= 16;
        }
    }
    return nbr;
}
