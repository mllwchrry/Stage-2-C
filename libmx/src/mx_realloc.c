#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {

    size_t current_size = malloc_size(ptr);
    void *res_ptr = NULL;

    if (!ptr && size)
        return malloc(size);

    if (ptr && size <= 0) {
        free(ptr);
        return NULL;
    }

    if (current_size > size) {
        res_ptr = (void *)malloc(current_size);
        size = current_size;
    }
    else
        res_ptr = (void *)malloc(size);

    if (!res_ptr) return NULL;

    res_ptr = mx_memmove(res_ptr, ptr, size);
    free(ptr);

    return res_ptr;
}
