#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {

    if(!str || !sub || !replace || mx_strlen(str) <= mx_strlen(sub)) return NULL;
    if(!*sub) return (char*)str;

    char *res = NULL;
    int first = 0;

    while(*str != '\0'){

        if(mx_strncmp(str, sub, mx_strlen(sub)) == 0) {

            res = mx_strjoin(res, replace);
            str += mx_strlen(sub);
        }
        else {

            char a = str[first];
            res = mx_strjoin(res, &a);
            str++;
        }
    }
    return res;
}
