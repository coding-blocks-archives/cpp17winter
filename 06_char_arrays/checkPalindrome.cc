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

bool checkPalindrome(char arr[]){
    int be = 0;
    int en = StringLength(arr) - 1;

    while(be < en){
        if (arr[be] != arr[en]){
            return false;
        }
        ++be;
        --en;
    }
    return true;
}


int main(){
    char arr[100];
    cin >> arr;

    bool ans = checkPalindrome(arr);
    cout << ans;   
}