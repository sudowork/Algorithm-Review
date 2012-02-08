/* Kevin Gao
 * Algorithm Review
 * 02/08/2012
 * Algorithm IO template
 */
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

std::vector<int> split(std::string &s, char delim);
void printVector(std::vector<int> &v);

int main() {
	std::string input;
	while (std::getline(std::cin,input)) {	 // Take input until eof
		std::vector<int> v = split(input,' ');
		// algorithm goes here
		std::cout << "" << std::endl;
	}
	return 0;
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
