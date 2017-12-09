// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;

	bool isPrime = true;	// assumption: No is prime

	int div = 2;
	while (div < N) {
		// check for primeness
		if (N % div == 0) {
			isPrime = false;
			break;
		}
		else {
			div = div + 1;
		}
	}

	if (isPrime == true) {
		cout << N << " is Prime" << endl;
	} else {
		cout << N << " is not Prime" << endl;
	}

}
