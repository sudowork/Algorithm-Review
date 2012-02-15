/* Kevin Gao
 * Takes the absolute value without logic statements
 */

#include <iostream>
#include <sstream>
using namespace std; 

int const INTWIDTH = sizeof(int)*8-1;

int myAbs(int i);

int main(int argc, const char* argv[]) {
	if (argc > 2) return -1;

	int i;
	if (argc == 2) {
		stringstream(argv[1]) >> i;
	} else {
		i = -1;
	}
	cout << myAbs(i) << endl;
	return 0;
}

int myAbs(int i) {
	// Bit-wise AND 0x100... with number,
	// then arithmetic shift right to get
	// either 0x111... or 0x000...
	int m = ((1<<INTWIDTH) & i) >> INTWIDTH;
	// XOR m with number to flip bits if
	// 0x111... was the result. Finally,
	// AND m with 0x1 and add.
	return (m^i) + (m&1);
}
