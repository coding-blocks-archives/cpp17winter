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

void stringRotate(char arr[]) {
    int len = StringLength(arr);

    char lastChar = arr[len - 1];

    for (int i = len - 1; i > 0; --i) {
        arr[i] = arr[i - 1];
    }
    arr[0] = lastChar;

}

int main() {
    char arr[10];
    cin >> arr;

    stringRotate(arr);

    cout << arr;
}