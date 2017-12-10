// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

/*
   1
  232
 34543
*/

int main(){
	int nLines;
	cin >> nLines;

	for(int curRow = 1; curRow <= nLines; ++curRow){

		// print spaces
		int nSpaces = nLines - curRow;
		for(int curSpace = 1; curSpace <= nSpaces; ++curSpace){
			cout << " ";
		}

		// print 2*curRow - 1 values
		int val = curRow;
		int nVal = 2 * curRow - 1;
		bool isDec = false;

		for(int ithVal = 1; ithVal <= nVal; ++ithVal){
			cout << val;
			if (val == nVal) isDec = true;

			if (isDec) val = val - 1;
			else val = val + 1;
		}
		cout << endl;
	}
}