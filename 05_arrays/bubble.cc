// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

void inputArr(int arr[100], int N){
    for(int i = 0; i < N; ++i){
        cin >> arr[i];      // arrays are passed by reference
    }
}

void outputArr(int arr[100], int N){
    // int arr[100] = argument received from calling function

    for(int i = 0; i < N; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int N){

    for(int numOfEle = 0; numOfEle < N - 1; ++numOfEle){

        for(int idx = 0; idx < N - numOfEle; ++idx){
            if (idx <= N - 2 && arr[idx] > arr[idx + 1]){
                // swap
                int tmp = arr[idx];
                arr[idx] = arr[idx + 1];
                arr[idx + 1]  = tmp;
            }
        }
    }


}

int main(){
    int arr[10];
    int N;
    cin >> N;
    inputArr(arr, N);

    bubbleSort(arr, N);

    outputArr(arr, N);
}