#include "libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *node = mx_create_node(data);

    if(!list || !*list) {
        *list = node;
        return;
    }

    t_list *tmp = *list;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = node;
}
