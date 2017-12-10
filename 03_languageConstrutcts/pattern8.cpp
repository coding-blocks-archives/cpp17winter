// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
/*
A
AB
ABC
*/

int main() {
	int nLines;
	cin >> nLines;

	for (int curRow = 1; curRow <= nLines; ++curRow){
		char val = 'A';
		
		for(int ithVal = 1; ithVal <= curRow; ++ithVal){
			cout << val;
			val = val + 1;
		}

		cout << endl;
	}
}