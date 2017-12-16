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

void printN(int x[100], int N){
    
    // setting the Array
    for(int i = 0; i < N; ++i){
        x[i] = i + 1;
    }

    // print 
    outputArr(x, N);
}

int main(){
    int arr[100];
    int N;
    cin >> N;

    printN(arr, N);    
}



// 1 to N, input, output, largest, 