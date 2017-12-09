// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;

	for(int curNum = 2; curNum <= N; ++curNum){
		bool isPrime = true;
		int div = 2;
		while(div < curNum){
			if (curNum % div == 0){
				isPrime = false;
				break;
			}
			// div = div + 1;
			++div;
		}

		if (isPrime == true) cout << curNum << " ";
	}	
}