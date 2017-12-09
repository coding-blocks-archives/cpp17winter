// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;

	int largest = -1000000000;	// sentinel
	int curNum;

	for(int i = 1; i <= N; ++i){
		cin >> curNum;
		if (curNum > largest){
			largest = curNum;
		}
	}

	cout << largest << endl;
}