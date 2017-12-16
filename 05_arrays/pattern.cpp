// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

void printStar(int n){
    for(int i = 0; i < n; ++i){
        cout << "*";
    }
}


void printPattern(int N){
    int totalStars = N + 1;

    for(int curRow = 1; curRow <= N; ++ curRow){

        // print curRow jitne stars
        printStar(curRow);
        cout << " ";

        printStar(totalStars - curRow);
        cout << " ";

        printStar(totalStars - curRow);
        cout << " ";

        printStar(curRow);
        cout << endl;
    }
}


int main(){
    int nRows;
    cin >> nRows;

    printPattern(nRows);   
}