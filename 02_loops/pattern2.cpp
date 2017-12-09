// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

/*
1
2 3
4 5 6
7 8 9 10
*/

#include <iostream>
using namespace std;
int main() {
	int nLines;
	cin >> nLines;

	int val = 1;
	// print N lines
	for (int curLine = 1; curLine <= nLines; ++curLine) {
		// In each line, I have to print curLine jitne Numbers
		for (int ithVal = 1; ithVal <= curLine; ++ithVal) {
			// print a val
			cout << val << " ";
			++val;
		}
		cout << endl;
	}


}