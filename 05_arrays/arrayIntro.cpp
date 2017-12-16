// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;


int main(){
    int arr[5]; // [0, 4]

    for(int idx = 0; idx < 5; ++idx){
        cin >> arr[idx];
    }    

    for(int idx = 0; idx < 5; ++idx){
        cout << arr[idx] << " ";
    }
}