#include "libmx.h"

void mx_pop_front(t_list **head) {

    if (!*head || !head) return;

    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
    }
    else {
        t_list *tmp = (*head)->next;
        free(*head);
        *head = tmp;
    }
}
