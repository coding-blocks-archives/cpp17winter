// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;

	for(int curNum = 1; curNum <= N; ++curNum){
		if (curNum % 2 == 0) {
			cout << curNum;
		}
		else {
			if (curNum % 3 == 0) cout << curNum;
		}
		cout << " ";
	}
}