// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
int main(){
    char mat[10][100];
    int N;
    cin >> N;
    // cin.get(); // consumes \n

    for(int i = 0; i < N; ++i){
        cin.getline(mat[i], 100);  // reads max 99 char or \n whichever comes first
    }   

    for(int i = 0; i < N; ++i){
        cout << i << " X" << mat[i] << "X" << endl;
    }
}