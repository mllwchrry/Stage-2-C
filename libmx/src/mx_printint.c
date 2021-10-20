#include "libmx.h"

void mx_printint(int n) {
    if (n < 0) {
        if (n == -2147483648) {
            mx_printint(-214748364);
            mx_printint(8);
            return;
        }
        else {
            mx_printchar('-');
            n = -n;
        }
    }

    int bufn = n / 10;

    if (n > 9) {
        n -= bufn * 10;
        mx_printint(bufn);
    }

    mx_printchar('0' + n);
}
