/* Kevin Gao
 * Algorithm Review
 * 02/08/2012
 * Insertion Sort
 */
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "utility.h"

using namespace util;

int main() {
	std::string input;
	std::cout << "Insertion Sort" << std::endl;
	while (std::getline(std::cin,input)) {	 // Take input until eof
		std::vector<int> v = split(input,' ');
		printVector(v);
		
		// Insertion Sort
		std::vector<int> v2;
		v2.push_back(v[1]);
		for (int i = 1; i < v.size(); i++) {
			bool insert = false;
			for (int j = 0; j < v2.size(); j++) {
				if (v[i] < v2[j]) {
					v2.insert(v2.begin()+j,v[i]);
					insert = true;
					break;
				}
			}
			if (!insert) v2.push_back(v[i]);
		}
		v = v2;

		printVector(v);
		std::cout << std::endl;
	}
	return 0;
}
