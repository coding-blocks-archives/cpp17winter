// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
int main() {
	int x, y, z;

	cin >> x >> y >> z;

	if (x > y) {
		// either x is largest or z is largest
		if (x > z) {
			cout << x << " is largest" << endl;
		}
		else {
			cout << z << " is largest" << endl;
		}
	} 
	else {
		// y  is greater than
		// ==> either y is largest or z is largest
		if (y > z) {
			cout << y << " is largest" << endl;
		}
		else {
			cout << z << " is largest" << endl;
		}
	}
}