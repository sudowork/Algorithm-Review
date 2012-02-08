/* Kevin Gao
 * Algorithm Review
 * 02/08/2012
 * Bubble Sort
 */
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

std::vector<int> split(std::string &s, char delim);
void vswap(std::vector<int> &v, int a, int b);
void printVector(std::vector<int> &v);

int main() {
	std::string input;
	std::cout << "Bubble Sort" << std::endl;
	while (std::getline(std::cin,input)) {	 // Take input until eof
		std::vector<int> v = split(input,' ');
		printVector(v);
		
		// Bubble Sort
		for(int i = 0; i < v.size(); i++) {
			bool swap = false;
			for (int j = 0; j < v.size()-(1+i); j++) {
				if (v.at(j) > v.at(j+1)) {
					swap = true;
					vswap(v,j,j+1);
				}
			}
			if (!swap) break;
		}

		printVector(v);
		std::cout << std::endl;
	}
	return 0;
}

// Swaps two elements in a vector
void vswap(std::vector<int> &v, int a, int b) {
	int tmp = v.at(a);
	v.at(a) = v.at(b);
	v.at(b) = tmp;
}

// Tokenize string (single line) by delimiter
std::vector<int> split(std::string &s, char delim) {
	
	std::istringstream iss(s);		// Convert string to input stream
	std::vector<int> tokens;		// Vector for tokenized string
	std::string elem;				// Storage for individual item

	while (std::getline(iss,elem,delim))			// while has delimiters
		tokens.push_back(std::atoi(elem.c_str()));	// store elem as int in vector
	return tokens;
}

// Prints vector contents to stdout
void printVector(std::vector<int> &v) {
	std::cout << "[";
	for (int i = 0; i < v.size()-1; i++) {
		std::cout << v.at(i) << " ";
	}
	std::cout << v.at(v.size()-1);
	std::cout << "]\n";
}
