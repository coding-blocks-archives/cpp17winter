// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
void inputArr(int arr[100], int N) {
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];      // arrays are passed by reference
    }
}

void outputArr(int arr[100], int N) {
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";      // arrays are passed by reference
    }
}

void insertionSort(int arr[], int N) {
    for (int i = 1; i < N; ++i) {
        int prevPos = i - 1;
        int ithEle = arr[i];
        while (prevPos >= 0 && arr[prevPos] > ithEle) {
            arr[prevPos + 1] = arr[prevPos];
            --prevPos;
        }
        arr[prevPos + 1] = ithEle;
    }
}


int main() {
    int arr[100];
    int N;
    cin >> N;

    inputArr(arr , N);
    insertionSort(arr, N);
    outputArr(arr, N);
}