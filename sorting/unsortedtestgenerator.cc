/* Kevin Gao
 * Algorithm Review
 * 02/08/2012
 * Test case generator for unsorted arrays
 */
#include <iostream>
#include <time.h>

int main(int argc, const char* argv[]) {
	// Handle arguments <numCases, maxLength>
	int numCases = 100;
	int maxLength = 10;
	int randMax = 0xFFFF;
	if (argc > 4) return -1;
	if (argc > 3) randMax = std::atoi(argv[3]);
	if (argc > 2) maxLength = std::atoi(argv[2]);
	if (argc > 1) numCases = std::atoi(argv[1]);

	// Generate test cases
	// Seed random generator
	srand(std::time(NULL));
	for (int i = 0; i < numCases; i++) {
		for (int j = 0; j < (rand() % maxLength); j++) {
			std::cout << rand() % randMax << " ";
		}
		std::cout << rand() % randMax << std::endl;
	}
	return 0;
}
