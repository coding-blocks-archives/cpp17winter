// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int factorial(int n);		// function declaration

int factorial(int n){
	// function defintion
	int ans = 1;
	for(int x = 1; x <= n; ++x){
		ans = ans * x;
	}
	return ans;
}

int main(){
	int n, r;
	cin >> n >> r;

	int nFact = factorial(n);
	int rFact = factorial(r);
	int nrFact = factorial(n-r);

	int ans = nFact / (rFact * nrFact);
	cout << ans;	
}

