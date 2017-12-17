// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
void inputArr(int arr[100], int N) {
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];      // arrays are passed by reference
    }
}

int findElement(int arr[], int N, int x) {
    for (int i = 0; i < N; ++i) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int N, int x){
    int be = 0;
    int en = N - 1;

    while(be <= en){
        int mid = (be + en) / 2;
        if (arr[mid] == x){
            return mid;
        } else if (arr[mid] > x){
            // search in the left
            en = mid - 1;
        } else {
            // search in the right
            be = mid + 1;
        }
    }
    return -1;
}

// sum to x
bool pairExist(int arr[], int N, int sum){
    
    for(int i = 0; i < N - 1; ++i){
        int x = arr[i];
        for(int j = i + 1; j < N; ++j){
            if (x + arr[j] == sum){
                return true;
            }
        }
    }
    return false;

}

// Hw 2 pointer approach; sum to x

int main() {
    int N;
    cin >> N;
    int arr[100];

    inputArr(arr, N);
    int x;
    cin >> x;

    // int ans = findElement(arr, N, x);

    int ans = pairExist(arr, N, x);

    cout << ans;
}