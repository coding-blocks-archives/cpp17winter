// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

void PrintPrimesUptoN(int n){
	for(int cur_num = 2; cur_num <= n; ++cur_num){
		bool CheckPrime(int n);	// fn declaration inside function
		if (CheckPrime(cur_num) == true){
			cout << cur_num << " ";
		}
	}
}

bool CheckPrime(int N){
	int div = 2;
	while(div < N){
		if (N % div == 0) return false;
		++div;
	}
	return true;
}


int main(){
	int N;
	cin >> N;

	PrintPrimesUptoN(N);	
}