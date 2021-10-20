#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {

	unsigned char *tmp = (unsigned char *)s + mx_strlen(s);
	for (; n > 0; n--) {
	    if (*tmp == (unsigned char)c)
	        return tmp;
	   tmp--;
	}
	return NULL;
}
