// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
int main(){
    
    // char arr[10];
    // cin.getline(arr, 10);    // writes 100 char into the array
    // cout << arr;

    char a1[100];
    char a2[100] = {'a', 'c'};

    cin.getline(a1, 5, 'x');    // delimiting char
    cout << cin << endl;
    cout << a1 << endl;

    cin.getline(a2, 5, '\n');
    cout << cin << endl;
    cout << a2 << endl;


}