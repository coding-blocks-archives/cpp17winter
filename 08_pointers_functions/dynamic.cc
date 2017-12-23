// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int* foo(){
    int x = 10;
    return &x;

}


int main(){
    int *y =  foo();
    cout << y << endl;
    cout << *y << endl;


}