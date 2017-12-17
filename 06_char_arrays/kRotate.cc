// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
int StringLength(char arr[]) {
    int len = 0;
    int i = 0;

    while (arr[i] != '\0') {
        ++i;
        ++len;
    }
    return len;
}

void kRotate(char arr[], int k) {
    char tmp[100] = {};
    int len = StringLength(arr);

    k = k % len;

    // copy last k char into tmp
    int tmpPos = 0;
    for (int i = len - k; i < len; ++i) {
        tmp[tmpPos] = arr[i];
        ++tmpPos;
    }

    // shift N - k char by k pos
    int lastPos = len - 1;
    for (int i = len - k - 1; i >= 0; --i) {
        arr[lastPos] = arr[i];
        --lastPos;
    }

    // copy first k char from tmp to arr
    for(int i = 0; i < k; ++i){
        arr[i] = tmp[i];
    }

}


int main() {
    char arr[100];
    cin >> arr;
    int k;
    cin  >> k;

    kRotate(arr, k);
    cout << arr;
}