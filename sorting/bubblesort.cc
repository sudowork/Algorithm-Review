/* Kevin Gao
 * Algorithm Review
 * 02/08/2012
 * Bubble Sort
 */
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "utility.h"

using namespace util;

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
