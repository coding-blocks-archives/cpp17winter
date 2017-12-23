// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;


int main() {
    int mat[2][3];

    cout << "mat : " << mat << endl;
    cout << "&mat[0] " << &mat[0] + 1<< endl; // add of row
    
    int (*ptr)[3] = &mat[0]; 
    cout << ptr + 1 << endl;

    int (*ptr2)[2][3] = &mat;   //ptr to a matrix
    cout << ptr2 + 1 << endl;

    cout << "&mat[0][0] " << &mat[0][0] + 1<< endl;
}