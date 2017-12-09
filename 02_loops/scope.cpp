// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;


int main(){
	int x = 2;

	{
		cout << x << " ";
		x = 500;
		cout << x << " ";
		int y = 100;
		cout << y << " ";

	}	
	cout << x <<  " ";
}