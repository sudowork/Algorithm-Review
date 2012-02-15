/* Kevin Gao
 * Algorithm Review
 * 02/08/2012
 * Selection Sort
 */
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "utility.h"

using namespace util;

int main() {
	std::string input;
	std::cout << "Selection Sort" << std::endl;
	while (std::getline(std::cin,input)) {	 // Take input until eof
		std::vector<int> v = split(input,' ');
		printVector(v);
		
		// Selection Sort
		for (int i = 0; i < v.size(); i++) {
			int min = v[i];
			int minind = i;
			for (int j = i+1; j < v.size(); j++) {
				if (v[j] < min) {
					min = v[j];
					minind = j;
				}
			}
			if (minind != i) vswap(v,i,minind);
		}

		printVector(v);
		std::cout << std::endl;
	}
	return 0;
}
