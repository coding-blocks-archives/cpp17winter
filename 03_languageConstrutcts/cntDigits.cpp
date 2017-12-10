// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;

	int cntDigits  = 0;

	while(N > 0){
		int unitDigit = N % 10;
		++cntDigits;

		N = N / 10;
	}

	cout << cntDigits;	
}