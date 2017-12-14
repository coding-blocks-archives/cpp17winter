// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int ReverseNum(int num){
	int rev_num = 0;
	
	while(num > 0){
		int unitDigit = num % 10;
		rev_num = rev_num * 10;		// shift rev_num to left
		rev_num = rev_num + unitDigit;
		num = num / 10;
	}
	return rev_num;
}

int main(){
	int num;
	cin >> num;

	int rev_num = ReverseNum(num);
	cout << rev_num;	
}