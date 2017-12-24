// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
int main() {
    int x ;
    cin >> x;

    // if (x == 1) {
    //     cout << "x is one";
    // } else if (x == 2) {
    //     cout << "x is two";
    // } else {
    //     cout << "X is something else";
    // }

    switch (x) {
        case 1 :
            cout << "x is one";
            break;
        case 2 :
            cout << "x is two";
            break;
        default :
        cout << "X is something else";


    }
}