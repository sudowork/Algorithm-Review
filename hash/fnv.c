#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

const uint32_t fnv(const char * str, int numBytes, const int buckets);
const uint32_t seed = 16777619,
	offset = 2166136261;

// Function implementing a FNV inspired hash
// 	on a string
int main(int argc, const char * argv[]) {
	char * str = "Hello, World!";
	int buckets = UINT32_MAX;
	if (argc > 2) buckets = atoi(argv[2]);
	if (argc > 1) str = (char *) argv[1];
	printf("Input: %s\nHashed: %u",str,fnv(str,sizeof(str),buckets));
	return 0;
}

// 32-bit FNV hashing function
const uint32_t fnv(const char * str, int numBytes, const int buckets) {
	uint32_t hash = offset;
	// Loop through octals
	while (numBytes--) {
		hash ^= str[numBytes];
		hash *= seed;
	}
	return (const uint32_t) (hash % buckets);
}
