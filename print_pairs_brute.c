#include <stdio.h>
#include "print_pairs.h"

int isUsed(const int * used, const int uLen, const int element) {
	for (int i = 0; i < uLen; ++i) {
		if (used[i] == element) return 1;
	}
	return 0;
}
 
 
void print_pairs_brute(const int * arr, const int len, const int N) {
	printf("\nbrute:\t\t");
	int used[len / 2];
	int usedLength = 0;
	for (int i = 0; i < len - 1; ++i) {
		if (isUsed(used, usedLength, arr[i]) || isUsed(used, usedLength, N - arr[i])) continue;
		for (int j = i + 1; j < len; ++j) {
			if (arr[i] + arr[j] == N) {
				used[usedLength++] = arr[i];
#ifdef VERBOSE
				printf("[%d,%d] ", arr[i], arr[j]);
#endif
				break;
			}
		}
	}
	printf("TEST IS FINISHED");
}