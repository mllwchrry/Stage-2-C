#include "libmx.h"

int mx_sqrt(int x) {
    if (x > 0) {
        int cntr = 1;
        int res = 1;

        while (cntr > 0 && x > cntr) {
            res++;
            cntr = res * res;
        }
        if (cntr == x)
            return res;
    }
    return 0;
}
