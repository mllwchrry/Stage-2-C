#include "libmx.h"

void swap_elements(void **el1, void **el2) {
    void *tmp = *el1;
    *el1 = *el2;
    *el2 = tmp;
}

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void*, void*)) {

    if (!lst || !cmp) return NULL;

    for (t_list *tmp_i = lst; tmp_i; tmp_i = tmp_i->next) {
        for (t_list *tmp_j = lst; tmp_j->next; tmp_j = tmp_j->next) {
            if (cmp(tmp_j->data, tmp_j->next->data))
                swap_elements(&tmp_j->data, &tmp_j->next->data);
        }
    }
    return lst;
}
