#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {

    unsigned char *big_tmp = NULL;
	unsigned char *little_tmp = NULL;

	if (big_len >= little_len && little_len > 0 && big_len > 0) {

		big_tmp = (unsigned char *)big;
		little_tmp = (unsigned char *)little;

		for (; *big_tmp; big_tmp++)
		    if (mx_memcmp(big_tmp, little_tmp, little_len - 1) == 0)
				return big_tmp;
	}
	return NULL;
}
