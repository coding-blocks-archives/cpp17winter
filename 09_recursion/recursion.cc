// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <algorithm>
using namespace std;

void printInc(int n) {
    // printInc prints n numbers from [1...n] on the screen
    if (n == 0) {
        return;
    }

    printInc(n - 1);    // hypothesis...assumption
    cout << n << " ";
}

void printDec(int n) {
    // prints nos in decreasing order [n..1] with a space before digit
    if (n == 0) return;

    // cout << " " <<  n;

    cout << n << " ";
    printDec(n - 1);
}


int power(int x, int p) {
    if (p == 0) return 1;

    // int smallPower = power(x, p - 1);   //3**4
    // int ans = smallPower * x;
    // return ans;

    return x * power(x, p - 1);
}

// int power(int x, int p){
//     return p == 0 ? 1 : x * power(x, n - 1);
// }

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;   // base cases

    // int prevFib = fibonacci(n - 1);
    // int superPrev = fibonacci(n - 2);
    // int nthFib = prevFib + superPrev;
    // return nthFib;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void displayArr(int arr[], int n) {
    if (n == 0) {
        return ;
    }

    displayArr(arr, n - 1);
    cout << arr[n - 1] << " ";

}

void inputArr(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
}

void printArr(int arr[], int be, int en) {
    if (be > en) return;    // emptiness...

    cout << arr[be] << " ";
    printArr(arr, be + 1, en);
}

void printReverse(int arr[], int be, int en) {
    if (be > en) return;

    printReverse(arr, be + 1, en);
    cout << arr[be] << " ";
}

int findElement(int arr[], int be, int en, int x) {
    // THIS function RETURNS the index of the element x if found in
    // an array [be...en] otherwise RETURNS -1

    // if emptiness...
    if (be > en) return -1;

    if (arr[be] == x) {
        return be;
    }

    int pos = findElement(arr, be + 1, en, x);
    return pos;
}

int maxElement(int arr[], int be, int en) {
    // maxElement returns the maximum of all elements within the range
    // [be...en]
    if (be > en) {
        const int inf = 10000000;
        return -inf;
    }

    int maxSmallerArr = maxElement(arr, be + 1, en);

    // if (maxSmallerArr > arr[be]) return maxSmallerArr;
    // return arr[be];

    return max(maxSmallerArr, arr[be]);
}

void bubbleSort(int arr[], int be, int en) {
    if (be >= en) { // if empty or just one element
        return;
    }

    bubbleSort(arr, be + 1, en);
    if (arr[be] > arr[be + 1]) {
        swap(arr[be], arr[be + 1]);
        bubbleSort(arr, be + 1, en);
    }
}

int sumArr(int arr[], int be, int en) {
    if (be > en) return 0;
    return arr[be] + sumArr(arr, be + 1, en);
}

bool isSorted(int arr[], int be, int en) {
    if (be >= en) {
        return true;
    }

    bool remArrAns = isSorted(arr, be + 1, en);

    if (remArrAns == true) {
        // if (arr[be] < arr[be + 1]) return true;
        // return false;

        return arr[be] < arr[be + 1];
    }

    return false;

}

bool isSortedBetter(int arr[], int be, int en) {
    if (be >= en) return true;

    return (arr[be] < arr[be + 1]) &&
           isSortedBetter(arr, be + 1, en);
}

void printDig(int dig) {
    // if (dig == 0) cout << "zero";
    // else if (dig == 1) cout << "one";

    switch (dig) {
    case 0 :
        cout << "zero"; 
        break;
    case 1 :
        cout << "one";
        break;
    case 2 :
        cout << "two";
        break;
    case 3 :
        cout << "three";
        break;
    case 4 :
        cout << "four";
        break;
    case 5 :
        cout << "five";
        break;
    case 6 :
        cout << "six";
        break;
    case 7 :
        cout << "seven";
        break;
    case 8 :
        cout << "eight";
        break;
    case 9 :
        cout << "nine";
        break;
        // default is optional
    }
    cout << " ";
}


void printNum(int num) {
    if (num <= 0) return;

    printNum(num / 10);
    printDig(num % 10);
}

int main() {
    // int n;
    // cin >> n;

    // printInc(n);
    // printDec(n);

    // int p; cin >> p;
    // int ans = power(n, p);
    // cout << ans;

    int arr[20];
    int n;

    cin >> n;
    // inputArr(arr, n);
    // displayArr(arr, n);

    // printArr(arr, 2, n - 1); //[2...n-1]

    // printReverse(arr, 2, n - 1);

    // int x; cin >> x;
    // int pos = findElement(arr, 0, n - 1, x);
    // cout << pos << endl;

    // bubbleSort(arr, 0, n - 1);
    // displayArr(arr, n);

    // int ans = sumArr(arr, 0, n - 1);
    // cout << ans << endl;

    // bool ans = isSorted(arr, 0, n - 1);
    // cout << ans;

    printNum(n);
}