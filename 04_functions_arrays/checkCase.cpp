// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

void printCase(char c){
	if (c >= 'A' && c <= 'Z'){
		cout << "uppercase";
	} else if (c >= 'a' && c <= 'z'){
		cout << "lowercase";
	} else {
		cout << "others";
	}
}

bool IsUpper(char c){
	if (c >= 'A' && c <= 'Z') return true;
	return false;
}

bool IsLower(char c){
	return c >= 'a' && c <= 'z';
}

void printCase(char c){
	if (IsUpper(c) == true) {
		cout << "uppercase";
	} else if (IsLower(c) == true){
		cout << "lowercase";
	} else {
		cout << "others";
	}
}

int main(){
	char c;
	cin >> c;

	printCase(c);	
}