// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int arr[N];

    for(int i = 0; i < N; ++i){
        cin >> arr[i];
    }  

    // sum 
    int sum = 0;
    for(int i = 0; i < N; ++i){
        sum = sum + arr[i];
    }

    // print 
    cout << sum;
}