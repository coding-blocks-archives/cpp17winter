// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int main() {
	int n, r;
	cin >> n >> r;

	int nFact = 1;
	for (int x = 1; x <= n; ++x) nFact = nFact * x;

	int rFact = 1;
	for (int x = 1; x <= r; ++x) rFact = rFact * x;

	int nrFact = 1;
	for (int x = 1; x <= n - r; ++x) nrFact = nrFact * x;

	int ans = nFact / (rFact * nrFact);
	cout << ans;
}