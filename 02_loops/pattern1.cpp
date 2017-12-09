// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
int main() {
	int nLines;
	cin >> nLines;

	// print n Lines
	for (int curRow = 1; curRow <= nLines; ++curRow) {
		
		// print [1,curRow] values in each line
		for(int val = 1; val <= curRow; ++val){
			cout << val << " ";
		}
		cout << endl;
	
	}
}