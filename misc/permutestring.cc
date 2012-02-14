/* Kevin Gao
 * Permutes unique string
 * e.g. "abc" -> abc acb bac bca cab cba
 */

#include <iostream>
#include <string>
using namespace std; 

void permute(string s);
void merge(string s1, string s2);

int main(int argc, const char* argv[]) {
	if (argc > 2) return -1;
	if (argc == 2) permute(string(argv[1]));
	else {
		string s = "abc";
		permute(s);
	}
	return 0;
}

void permute(string s) {
	for (int i = 0; i < s.length(); i++)
		merge(s.substr(i,1),s.substr(0,i).append(s.substr(i+1)));
}

void merge(string s1, string s2) {
	if (s2.length() <= 1)
		cout << s1 << s2 << endl;
	else {
		for (int i = 0; i < s2.length(); i++)
			merge(string(s1).append(s2.substr(i,1)),
					s2.substr(0,i).append(s2.substr(i+1)));
	}
}
