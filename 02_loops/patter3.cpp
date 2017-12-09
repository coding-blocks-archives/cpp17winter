// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
int main(){

	int nLines;
	cin >> nLines;

	// print in increasing order
	int incLines = nLines / 2 + 1;
	for(int curRow = 1; curRow <= incLines; ++curRow){
		
		// print spaces
		int nSpace = incLines - curRow;
		for(int curSpace = 1; curSpace <= nSpace; ++curSpace){
			cout << " ";
		}

		//print 2 * curRow - 1 stars
		int nStars = 2 * curRow - 1;
		for(int ithVal = 1; ithVal <= nStars; ++ithVal){
			cout << "*";
		}
		cout << endl;
	}

	// print in decreasing order
	for(int curRow = incLines + 1; curRow <= nLines; ++curRow){
		// print spaces
		int nSpace = curRow - incLines;
		for(int curSpace = 1; curSpace <= nSpace; ++curSpace){
			cout << " ";
		}

		// print 2 (nLines - curRow) + 1 stars
		int nStars = 2 * (nLines - curRow) + 1;
		for(int ithVal = 1; ithVal <= nStars; ++ithVal){
			cout << "*";
		}
		cout << endl;
	}
	
}