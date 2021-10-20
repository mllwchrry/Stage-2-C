#include "libmx.h"

t_list *mx_create_node(void *data) {

    if (!data) return NULL;

    t_list *node_new = NULL;
    node_new = (t_list *)malloc(sizeof(t_list));
    if (!node_new) return NULL;

    node_new->data = data;
    node_new->next = NULL;

    return node_new;
}
