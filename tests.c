#include <stdlib.h>
#include <time.h>
#include <sys/resource.h>
#include "print_pairs.h"
#include "tests.h"
#include "mytimer.h"

#define COUNT (int) 1e6
#define BRUTE_THR (int) 1e5

void time_stamp() {
	printf(" IN %d ms", timer_clock());
	timer_reset();
}

void test_orig() {
	printf("\ntest_orig: ");
	int arr[] = {1,2,3,4,5,6,7,8,9,10,0,-1,-3};
    int count = sizeof(arr) / sizeof(arr[0]);
    print_pairs_brute(arr, count, 5);
	print_pairs_hash(arr, count, 5);
	print_pairs_2pointers(arr, count, 5);
	printf("\n");
}

void test_the_same() {
	printf("\ntest_the_same: ");
	int arr[COUNT];
	for (int i = 0; i < COUNT; ++i) {
		arr[i] = 2;
	}
	timer_start();
    if (COUNT <= BRUTE_THR) {
		print_pairs_brute(arr, COUNT, 4);
		time_stamp();
	}
	print_pairs_hash(arr, COUNT, 4);
	time_stamp();
	print_pairs_2pointers(arr, COUNT, 4);
	time_stamp();
	printf("\n");
}
 
void test_one_pair() {
	printf("\ntest_one_pair: ");
	int arr[COUNT];
	for (int i = 0; i < COUNT / 2; ++i) {
		arr[i] = 2;
	}
	for (int i = COUNT / 2; i < COUNT; ++i) {
		arr[i] = 3;
	}
	timer_start();
    if (COUNT <= BRUTE_THR) {
		print_pairs_brute(arr, COUNT, 5);
		time_stamp();
	}
	print_pairs_hash(arr, COUNT, 5);
	time_stamp();
	print_pairs_2pointers(arr, COUNT, 5);
	time_stamp();
	printf("\n");
}
 
 
void test_random() {
	printf("\ntest_random: ");
	srand(time(NULL));
	int arr[COUNT];
	for (int i = 0; i < COUNT; ++i) {
		arr[i] = rand();
	}
	const int N = rand();
	timer_start();
    if (COUNT <= BRUTE_THR) {
		print_pairs_brute(arr, COUNT, N);
		time_stamp();
	}
	print_pairs_hash(arr, COUNT, N);
	time_stamp();
	print_pairs_2pointers(arr, COUNT, N);
	time_stamp();
	printf("\n");
}
 
void test_descending() {
	printf("\ntest_descending: ");
	int arr[COUNT];
	for (int i = 0; i < COUNT; ++i) {
		arr[i] = COUNT - i - 1;
	}
	timer_start();
    if (COUNT <= BRUTE_THR) {
		print_pairs_brute(arr, COUNT, COUNT-1);
		time_stamp();
	}
	print_pairs_hash(arr, COUNT, COUNT-1);
	time_stamp();
	print_pairs_2pointers(arr, COUNT, COUNT-1);
	time_stamp();
	printf("\n");
}

void test_all() {
	test_orig();
	test_the_same();
	test_one_pair();
	test_random();
	test_descending();	
}

void set_min_stack_size(const rlim_t kStackSize) {
	struct rlimit rl;
    int result = getrlimit(RLIMIT_STACK, &rl);
    if (result == 0) {
        if (rl.rlim_cur < kStackSize) {
            rl.rlim_cur = kStackSize;
            result = setrlimit(RLIMIT_STACK, &rl);
            if (result != 0) {
                printf("\nERROR setrlimit returned result = %d\n", result);
            }
        }
    }
}

int main() {
	set_min_stack_size(1000 * 1024 * 1024); // 1Gb
	test_all();
	return 0;
}