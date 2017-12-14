// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

double fahrToCel(int fahr) {
	double cel = 5.0 / 9.0 * (fahr - 32);
	return cel;
}

void printFahr2Cel(int start_val, int final_val, int step);

int main() {
	int initial;
	int final;
	int step;

	cin >> initial >> final >> step;
	printFahr2Cel(initial, final, step);
}

void printFahr2Cel(int start_val, int final_val, int step) {
	while (start_val <= final_val) {
		double cel = fahrToCel(start_val);
		cout << start_val << "F: " << cel << "C" << endl;
		start_val = start_val + step;--
	}
}