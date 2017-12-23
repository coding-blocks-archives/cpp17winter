// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int * foo(){
    int *x = new int;
    *x = 2;
    cout << "x " << x << endl;
    return x;
}


int main(){
    int * ptr = foo();
    delete ptr;

    // ptr = foo();

    // int * p2 = foo();


    // ptr ... is a dangling ptr

    cout << "ptr " << ptr << endl;
    cout << "*ptr "  <<  *ptr;   
}