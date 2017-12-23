// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

void print(int *p , int N){
    for(int i = 0; i < N; ++i){
        cout << p[i] << " ";
    }
}

void update(int arr[], int N){
    for(int i = 0; i < N; ++i){
        arr[i] += 5;
    }
}


int * createArr(int n){
    int * p = new int[n]();   // ();intialise   else garbage
    return p;
}

void inputArr(int * a, int n){
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
}

int main() {
    int N;
    cin >> N;

    int * ptr = createArr(N);
    // inputArr(ptr, N);
    update(ptr, N);
    print(ptr, N);
    delete [] ptr;  // MUST
}