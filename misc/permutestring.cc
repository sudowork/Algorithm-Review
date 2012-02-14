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
		/* Consideration:
		 * If dealing with non-unique characters,
		 * keep an array of bools (one bool for each
		 * letter of your chosen alphabet) in this scope.
		 * Before calling merge; check if alphabet[i] is true
		 * if it is, then don't call merge. If not true
		 * then set to true and call merge.
		 * Alternative:
		 * If alphabet size is sufficiently small, use an int
		 * and use bit-wise logic (with shifts, etc.) to con-
		 * serve memory.
		 */
		/* Consideration #2:
		 * If memory is not a concern, but speed is, use
		 * memoization in the form of a HashMap to save
		 * already computed results. Use the string as a key
		 * and then keep the results as a list in as the Map's
		 * value.
		 */
		for (int i = 0; i < s2.length(); i++) {
			merge(string(s1).append(s2.substr(i,1)),
					s2.substr(0,i).append(s2.substr(i+1)));
		}
	}
}
