#include "libmx.h"

int mx_quicksort(char **arr, int left, int right) {
    if (!arr) return -1;

    int swaps = 0;

    if (left < right) {

        int r_ind = right;
        int l_ind = left;
        char *mid = arr[(r_ind + l_ind) / 2];

        while (l_ind <= r_ind) {
            while (mx_strlen(arr[l_ind]) < mx_strlen(mid))
                l_ind++;

            while (mx_strlen(arr[r_ind]) > mx_strlen(mid))
                r_ind--;

            if (l_ind <= r_ind) {
                if (mx_strlen(arr[r_ind]) != mx_strlen(arr[l_ind])) {

                    char *temp = arr[l_ind];
                    arr[l_ind] = arr[r_ind];
                    arr[r_ind] = temp;
                    swaps++;
                }

                r_ind--;
                l_ind++;
            }
        }

        swaps += mx_quicksort(arr, left, r_ind);
        swaps += mx_quicksort(arr, l_ind, right);
    }

    return swaps;
}
