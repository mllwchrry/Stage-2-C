#include "libmx.h"

int mx_count_words(const char *str, char c) {
    if (str != NULL) {

        unsigned words = 0;
        int ind = 0;
        bool flag = true;

        while(str[ind]) {
            if (c == str[ind])
                flag = true;
            else if (flag) {
                flag = false;
                words++;
            }
            ind++;
        }
        return words;
    }

    return -1;
}
