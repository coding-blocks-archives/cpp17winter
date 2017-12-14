// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

bool IsAlpha(char c){
  return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool IsDigit(char c){
  return c >= '0' && c <= '9';
}

bool IsWhitespace(char c){
  return c == ' ' || c == '\t' || c == '\n';
}

bool IsSpace(char c){
  return c == ' ';
}

bool IsLine(char c){
  return c == '\n';
}

void PrintCnt() {
  char c;

  int num_words = 0;
  int num_alpha = 0;
  int num_whitespaces = 0;
  int num_spaces = 0;
  int num_char = 0;
  int num_digits = 0;
  int num_lines = 0;
  int num_others = 0;
  bool word_start = false;

  while (true) {
    c = cin.get();
    if (c == '$') break;

    ++num_char;

    if (IsAlpha(c) == true) {
      ++num_alpha;
      word_start = true;
    } else if (IsDigit(c) == true) {
      ++num_digits;
      word_start = true;
    } else if (IsWhitespace(c) == true) {
      ++num_whitespaces;

          if (word_start == true){
            ++num_words;
          }
          word_start = false;

          if (IsSpace(c) == true) {
            ++num_spaces;
          } else if (IsLine(c) == true) {
            ++num_lines;
          }

    } else{
      ++num_others;
    }

  }
    // print
    cout << "Characters\t:" << num_char         << endl;
    cout << "Alphabets\t:"  << num_alpha        << endl;
    cout << "Digits\t:"     << num_digits       << endl;
    cout << "WhiteSpaces\t:"<< num_whitespaces  << endl;
    cout << "Spaces\t:"     << num_spaces       << endl;
    cout << "Lines\t:"      << num_lines        << endl;
    cout << "Others\t:"     << num_others       << endl;
    cout << "Words\t:"      << num_words        << endl;
}

int main() {
  PrintCnt();
}