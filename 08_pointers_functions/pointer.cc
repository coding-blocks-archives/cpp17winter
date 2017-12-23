// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
int main() {
    // int x = 10;
    // int * ptr = &x;

    // cout << "x " << x << endl;
    // cout << "&x " << &x << endl;
    // cout << "ptr " << ptr << endl;
    // cout << "*ptr "<< *ptr << endl;

    // double * pc = (double *)&x;
    // cout << pc << endl;
    // cout << *pc << endl;


    // int a[10] = {1,2,3,4,5};

    // int *p1 = &a[0];
    // int *p2 = &a[3];

    // cout << p2 - p1;

    // int * p1 = 0;
    // double * p2 = NULL;
    // cout << p1 + 1 << endl;
    // cout << p2 + 1 << endl;

    int arr[10];
    int * p1 = arr;

    // cout << arr + 1 << endl;
    // cout << p1 + 1 << endl;
    // ++p1;
    // ++arr;   // Invalid

    cout << sizeof(p1) << endl;
    cout << sizeof(arr) << endl;

}