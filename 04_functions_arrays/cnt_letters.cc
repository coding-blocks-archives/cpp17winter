// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int InputAndCount(){
	char c;
	int cnt = 0;
	while (true){
		// cin >> c;
		c = cin.get();
		if (c == '$') break;
		++cnt;
	}
	return cnt;
}


int main(){
	int cnt_letters = InputAndCount();
	cout << cnt_letters;

	char ch;
	cin >> ch;
	cout << ch;	
}