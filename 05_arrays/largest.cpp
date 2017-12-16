// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

void inputArr(int arr[100], int N){
    for(int i = 0; i < N; ++i){
        cin >> arr[i];      // arrays are passed by reference
    }
}

int findLargest(int arr[100], int N){
    int largest = -100000;

    for(int i = 0; i < N; ++i){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    
    return largest;
}

int main(){
    int arr[100];
    int N;
    cin >> N;

    inputArr(arr, N);

    int ans = findLargest(arr, N);
    cout << ans;


}