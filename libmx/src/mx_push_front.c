#include "libmx.h"

void mx_push_front(t_list **list, void *data) {

    t_list *node = mx_create_node(data);

    if(!list || !*list) {
        *list = node;
        return;
    }

    t_list *tmp = NULL;
    tmp = *list;
    *list = node;
    node->next = tmp;

}
