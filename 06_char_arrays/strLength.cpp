// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int StringLength(char arr[]){
    int len = 0;
    int i = 0;

    while(arr[i] != '\0'){
        ++i;
        ++len;
    }
    return len;
}


int main(){
    char arr[100];

    // input
    // char c;
    // int i = 0;
    // while(true){
    //     c = cin.get();
    //     if (c == '\n'){
    //         arr[i] = '\0';
    //         break;
    //     }
    //     arr[i] = c;
    //     ++i;
    // }

    cin >> arr;

    int len = StringLength(arr);
    cout << len;
}