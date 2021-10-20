#include "libmx.h"

void mx_pop_back(t_list **head) {

    if (!*head || !head) return;

    if (!(*head)->next) {
        free(*head);
        *head = NULL;
        return;
    }

    t_list *pntr = *head;
    while (pntr && pntr->next->next)
        pntr = pntr->next;
    free(pntr->next);
    pntr->next = NULL;
}
