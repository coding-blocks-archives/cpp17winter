// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
int main(){
	
	int N;
	cin >> N;

	int i = 1;
	while (i <= 10){
		int prod = N * i;
		cout << N << " * " << i << " = " << prod << endl;

		++i;
	}
}