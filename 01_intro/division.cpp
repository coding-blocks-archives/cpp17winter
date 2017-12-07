#include <iostream>
using namespace std;

int main() {
	int divisor, dividend;

	cin >> dividend >> divisor;


	if (divisor != 0) {
		double quotient = (double)dividend / divisor;
		// explicit type casting
		// divisor : implicit type casting

		cout << quotient;
	}
	else {
		cout << "Sorry bro! Cant divide by zero.\n";
	}


}