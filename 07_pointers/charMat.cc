// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <cstring>
using namespace std;

void inputCharMat(char mat[][100], int N) {
    for (int ithWord = 0; ithWord < N; ++ithWord) {
        // cin >> mat[ithWord];
        cin.getline(mat[ithWord], 100);
    }
}

bool strcmpMy(char word1[], char word2[]) {
    int i = 0;
    int j = 0;
    while (word1[i] != '\0' && word2[j] != '\0') {
        if (word1[i] != word2[j]) return false;
        ++i;
        ++j;
    }
    return word1[i] == word2[j];
}

bool seachWord(char mat[][100], int N, char wordToSearch[]) {
    for (int i = 0; i < N; ++i) {
        // if (wordToSearch == mat[i]) {

        if (strcmp(wordToSearch, mat[i]) == 0) {
            return true;
        }
    }
    return false;
}

int main(){
    int N;
    cin >> N;

    // char c; cin >> c;
    // char c = cin.get();  // consumes one char

    // if (c == 'a') cout << "User entered a" << endl;
    
    char mat[10][100];
    char word[100];
    
    inputCharMat(mat, N);
    cout << "Plz enter a word to search\n";

    // cin >> word;
    cin.getline(word, 100);
    bool ans = seachWord(mat, N, word);
    cout << ans;
}

