// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int NRaisedM(int x, int m){
	int ans = 1;
	for(int i = 0; i < m; ++i){
		ans = ans * x;
	}
	return ans;
}

int main(){
	int n, m;
	cin >> n >> m;

	int ans = NRaisedM(n, m);
	cout << ans;

}