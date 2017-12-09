// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
int main(){
	int initial;
	int final;
	int step;

	cin >> initial >> final >> step;

	while(initial <= final){
		double cel = 5.0 / 9 * (initial - 32);
		cout << initial << " " << cel << endl;
		initial = initial + step;
	}	
}