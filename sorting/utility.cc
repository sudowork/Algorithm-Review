#include "utility.h"

// Tokenize string (single line) by delimiter
std::vector<int> util::split(std::string &s, char delim) {
	
	std::istringstream iss(s);		// Convert string to input stream
	std::vector<int> tokens;		// Vector for tokenized string
	std::string elem;				// Storage for individual item

	while (std::getline(iss,elem,delim))			// while has delimiters
		tokens.push_back(std::atoi(elem.c_str()));	// store elem as int in vector
	return tokens;
}

// Prints vector contents to stdout
void util::printVector(std::vector<int> &v) {
	std::cout << "[";
	for (int i = 0; i < v.size()-1; i++) {
		std::cout << v.at(i) << " ";
	}
	std::cout << v.at(v.size()-1);
	std::cout << "]\n";
}

// Swaps two elements in a vector
void util::vswap(std::vector<int> &v, int a, int b) {
	int tmp = v.at(a);
	v.at(a) = v.at(b);
	v.at(b) = tmp;
}
