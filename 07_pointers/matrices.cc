// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

void inputMat(int mat[][10], int m, int n) {
    for (int r = 0; r < m; ++r) {
        for (int c = 0; c < n; ++c) {
            cin >> mat[r][c];
        }
    }
}


void outputMat(int mat[5][10], int m, int n) {
    for (int r = 0; r < m; ++r) {
        for (int c = 0; c < n; ++c) {
            cout <<  mat[r][c] << " ";
        }
        cout << endl;
    }
}


void printDiagonal(int mat[][10], int n) {
    for (int i = 0; i < n; ++i) {
        cout << mat[i][i] << " ";
    }
    cout << endl;
}

void printLargestRowCol_2(int mat[][10], int m, int n) {
    const int inf = 1000000;
    int maxRowSum = -inf;
    int maxRow = -1;

    int colSum[10] = {};    // initialise with 0

    //get the best row
    for (int r = 0; r < m; ++r) {
        int curRowSum = 0;
        for (int c = 0; c < n; ++c) {
            curRowSum = curRowSum + mat[r][c];
            colSum[c] = colSum[c] + mat[r][c];
        }

        if (curRowSum > maxRowSum) {
            maxRowSum = curRowSum;
            maxRow = r;
        }
    }

    // compute best col
    int maxColSum = -inf;
    int maxCol = -1;
    for (int i = 0; i < n; ++i) {
        if (maxColSum < colSum[i]) {
            maxColSum = colSum[i];
            maxCol = i;
        }
    }

    cout << maxCol << " " << maxColSum << endl;
    cout << maxRow << " " << maxRowSum << endl;
}

void spiral(int mat[][10], int m, int n) {
    int startRow = 0;
    int endRow = m - 1;
    int startCol = 0;
    int endCol = n - 1;

    while (startRow <= endRow && startCol <= endCol) {

        for (int c = startCol; c <= endCol; ++c) {
            cout << mat[startRow][c] << " ";
        }
        ++startRow;

        for (int r = startRow; r <= endRow; ++r) {
            cout << mat[r][endCol] << " ";
        }
        --endCol;

        for (int c = endCol; startRow <= endRow && c >= startCol; --c) {
            cout << mat[endRow][c] << " ";
        }
        --endRow;

        for (int r = endRow; startCol <= endCol && r >= startRow; --r) {
            cout << mat[r][startCol] << " ";
        }
        ++startCol;
    }
}

void printLargestRowCol(int mat[][10], int m, int n) {
    const int inf = 1000000;
    int maxRowSum = -inf;
    int maxRow = -1;

    //get the best row
    for (int r = 0; r < m; ++r) {
        int curRowSum = 0;
        for (int c = 0; c < n; ++c) {
            curRowSum = curRowSum + mat[r][c];
        }

        if (curRowSum > maxRowSum) {
            maxRowSum = curRowSum;
            maxRow = r;
        }
    }

    cout << maxRow << " " << maxRowSum;

    // similary we can do col

}

int main() {
    int mat[5][10];

    int M, N;
    cin >> M >> N;

    inputMat(mat, M, N);

    // printLargestRowCol_2(mat, M, N);
    // outputMat(mat, M, N);

    spiral(mat, M, N);
}