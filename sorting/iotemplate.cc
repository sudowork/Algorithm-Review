/* Kevin Gao
 * Algorithm Review
 * 02/08/2012
 * Algorithm IO template
 */
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "utility.h"

using namespace util;

int main() {
	std::string input;
	while (std::getline(std::cin,input)) {	 // Take input until eof
		std::vector<int> v = split(input,' ');
		// algorithm goes here
		std::cout << "" << std::endl;
	}
	return 0;
}
