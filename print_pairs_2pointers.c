#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>
#include "print_pairs.h"

#define min(a, b) (a < b ? a : b)

void swap(int * arr, const int i, const int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
 

void sort(int * arr, int * map, const int lo, const int hi) {
	if (hi <= lo) return;
    int lt = lo, gt = hi;
    int i = lo;
	const int pivot = arr[lo];
	while (i <= gt) {
        if (arr[i] < pivot)  {
        	swap(arr, lt, i);
        	if (map != NULL) swap(map, lt, i);
        	lt++;
        	i++;
        } 
        else if (arr[i] > pivot) {
        	swap(arr, i, gt);
        	if (map != NULL) swap(map, i, gt);
        	gt--;
        }
        else {
        	i++;
        }
    }
    sort(arr, map, lo, lt-1);
    sort(arr, map, gt+1, hi);
}
 
int sorted(const int * arr, const int len) {
	for (int i = 1; i < len; ++i) {
		if (arr[i] < arr[i-1]) return 0;
	}
	return 1;
}
 
/* Arrange the N elements of ARRAY in random order.
   Only effective if N is much smaller than RAND_MAX;
   if this may not be the case, use a better random
   number generator. */
void shuffle(int * arr, int * map, int len) {
    if (len > 1) {
        for (int i = 0; i < len - 1; ++i) {
          int j = i + rand() / (RAND_MAX / (len - i) + 1);
          swap(arr, i, j);
          if (map != NULL) swap(map, i, j);
        }
    }
}
 
void print_pairs_2pointers(const int * arr, const int len, const int N) {
	printf("\ntwo pointers:\t");
	int arr_sorted[len];
	int mapToOrigin[len];
	int left_ids[len/2];
	int total = 0;
	for (int i = 0; i < len; ++i) {
		arr_sorted[i] = arr[i];
		mapToOrigin[i] = i;
	}
	shuffle(arr_sorted, mapToOrigin, len);
	sort(arr_sorted, mapToOrigin, 0, len-1);
	assert(sorted(arr_sorted, len));
	int lt = 0, ri = len - 1;
	while (lt < ri) {
		int sum = arr_sorted[lt] + arr_sorted[ri];
		if (sum > N) {
			ri--;
		}
		else if (sum < N) {
			lt++;
		}
		else {
			left_ids[total++] = min(mapToOrigin[lt], mapToOrigin[ri]);
			while (++lt < --ri && arr_sorted[lt] == arr_sorted[lt-1]);
		}
	}
	shuffle(left_ids, NULL, total);
	sort(left_ids, NULL, 0, total - 1);
	for (int li = 0; li < total; ++li) {
		int i = left_ids[li];
#ifdef VERBOSE
		printf("[%d,%d] ", arr[i], N - arr[i]);
#endif
	}
	printf("TEST IS FINISHED");
}