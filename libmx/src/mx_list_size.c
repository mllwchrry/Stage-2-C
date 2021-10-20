#include "libmx.h"

int mx_list_size(t_list *list) {

    if (!list) return 0;

    int length = 0;
    t_list *pntr = list;

    while(pntr) {
        length++;
        pntr = pntr->next;
    }

    return length;
}
