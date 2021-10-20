#include "libmx.h"

char *mx_itoa(int num) {
    char *res;

    if (num == 0) {
        res = (char *)malloc(sizeof(char) * 2);
        res[1] = '\0';
        res[0] = '0';

        return res;
    }

    bool positive = true;
    if (num < 0) {
        positive = false;
        num *= -1;
    }

    char buffer[22];
    int s_ind = 0;

    while (num != 0) {
        buffer[s_ind] = num % 10 + '0';
        s_ind++;
        num /= 10;
    }

    if (!positive) {
        buffer[s_ind] = '-';
        s_ind++;
    }

    res = (char *)malloc(sizeof(char) * (s_ind + 1));
    res[s_ind] = '\0';

    for (int i = s_ind - 1; i >= 0; i--) {
        res[s_ind - 1 - i] = buffer[i];
    }

    return res;
}
