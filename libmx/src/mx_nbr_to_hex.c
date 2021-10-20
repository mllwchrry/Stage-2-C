#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    if (nbr == 0) return "0";

	int ind = 0;
	int size = 0;
	int rem;
	int buffer = nbr;
	while (buffer != 0) {
	    size++;
	    buffer /= 16; }
	char *hex = mx_strnew(size);
	while (nbr != 0) {
		rem = nbr % 16;
		if (rem < 10)
		    hex[ind] = 48 + rem;
		else
		    hex[ind] = 87 + rem;
		ind++;
		nbr /= 16;
	}

	ind--;
	for (int i = 0; i < ind; i++, ind--) {
		char tmp = hex[i];
		hex[i] = hex[ind];
		hex[ind] = tmp;
	}
	return hex;
}
