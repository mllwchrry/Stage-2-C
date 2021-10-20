#include "libmx.h"

int mx_atoi(const char *str)
{
    while (mx_isspace(*str))
        str++;

    int sign = 1;
    if (*str == '+' || *str == '-') {
        if (*str == '-')
            sign = -1;
        str++;
    }
    int res = 0;

    while (mx_isdigit(*str)) {
        res = res * 10 + *str - '0';
        str++;
    }
    res *= sign;

    return res;
}
