// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;

	int binaryEqv = 0;
	int quotient = N;
	int multiplier = 1;

	while(quotient > 0){
		int rem = quotient % 2;
		binaryEqv = binaryEqv + multiplier * rem;

		quotient = quotient / 2;
		multiplier = multiplier * 10;
	}	

	cout << binaryEqv;
}