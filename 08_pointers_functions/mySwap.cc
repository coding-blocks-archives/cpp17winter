// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

void mySwap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void mySwap1(int &a, int &b){
    int tmp = a; 
    a = b;
    b = tmp;
}

int main(){
    int x, y;
    cin >> x >> y;

    // int * p = &x;

    int &newName = x;   // reference variable
    newName = newName + 10;

    cout << x;

    // mySwap(&x, &y);
    // mySwap1(x, y);

    cout << x << " " << y;
}