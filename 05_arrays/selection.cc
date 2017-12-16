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
    // int arr[100] = argument received from calling function

    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findLargestPos(int arr[], int be, int en) {
    int inf = 10000000;
    int largest = -inf;
    int pos = -1;

    while (be <= en) {
        if (largest < arr[be]) {
            largest = arr[be];
            pos = be;
        }
        ++be;
    }
    return pos;
}


void selectionSort(int arr[], int N) {
    for (int i = 0; i < N; ++i) {
        int lastPos = N - i - 1;
        int pos = findLargestPos(arr, 0, lastPos);
        // swap arr[i], arr[pos]

        int tmp = arr[lastPos];
        arr[lastPos] = arr[pos];
        arr[pos] = tmp;
    }
}


int main() {
    int arr[100];
    int N;
    cin >> N;

    inputArr(arr, N);

    selectionSort(arr, N);

    outputArr(arr, N);

}