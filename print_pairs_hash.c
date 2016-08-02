#include <stdio.h>
#include <hashtable.h>
#include <assert.h>
#include "print_pairs.h"

#define MAX_INT_STR_CAPACITY 10

int added_ok(const HashTable * table, const char * key, const int val_correct) {
	char * test_val_str;
	assert(hashtable_get(table, key, (void*) &test_val_str) == CC_OK);
	return atoi(test_val_str) == val_correct;
}

void print_pairs_hash(const int * arr, const int len, const int N) {
	printf("\nhashtable:\t");
	HashTableConf conf;
	HashTable * table;
	hashtable_conf_init(&conf);
    conf.initial_capacity = len;
	hashtable_new_conf(&conf, &table);
	
	char keys_allocated[len][MAX_INT_STR_CAPACITY];
	char vals_allocated[len][MAX_INT_STR_CAPACITY];
	for (int i = 0; i < len; ++i) {
		char * key_str = keys_allocated[i];
		char * val_str = vals_allocated[i];
		int count = 1;
		sprintf(key_str, "%d", arr[i]);
		if (2  * arr[i] == N) {
			char * val_str_prev;
			if (hashtable_get(table, key_str, (void*) &val_str_prev) == CC_OK) { // already in the bucket
				if (count >= 2) continue; // two the same items are alredy gathered
				count++;
			}
		}
		sprintf(val_str, "%d", count);
		assert(hashtable_add(table, key_str, val_str) == CC_OK);
		//assert(added_ok(table, key_str, count));
	}
	
	for (int i = 0; i < len; ++i) {
		char * first_key = keys_allocated[i];
		char second_key[MAX_INT_STR_CAPACITY];
		char * first_cnt_str;
		char * second_cnt_str;
		sprintf(second_key, "%d", N - arr[i]);
		if (hashtable_get(table, first_key, (void*) &first_cnt_str) != CC_OK) {
			// was previously removed
			continue;
		}
		//assert(atoi(first_cnt_str) > 0);
		int second_count = 0;
		if (hashtable_get(table, second_key, (void*) &second_cnt_str) == CC_OK) {
			second_count = atoi(second_cnt_str);
		}
		if (2  * arr[i] == N) {
			second_count--;
		}
		assert(hashtable_remove(table, first_key, NULL) == CC_OK);

		if (second_count > 0) {
#ifdef VERBOSE
			printf("[%d,%d] ", arr[i], N - arr[i]);
#endif
		}
	}

	hashtable_destroy(table);
	printf("TEST IS FINISHED");
}
