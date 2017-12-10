// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
int main(){
	int nLines;
	cin >> nLines;

 	for (int curRow = 1; curRow <= nLines; ++curRow){
 		// int val = 0;
 		// if (curRow % 2 == 1) val = 0;
 		// else val = 1;

 		int val = (curRow % 2 == 1) ? 0 : 1;

 		for(int ithVal = 0; ithVal < curRow; ++ithVal){
 			cout << val ;
 			// if (val == 1) val = 0;
 			// else val = 1;
 			val = 1 - val;
 		}

 		cout << endl;
 	}

}