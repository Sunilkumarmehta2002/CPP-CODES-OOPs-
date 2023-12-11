#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  cout << "Enter a string: ";
  getline(cin, str);
  string reversed_str = string(str.rbegin(), str.rend());
  if (str == reversed_str) {
    cout << str << " is a palindrome" << endl;
  } else {
    cout << str << " is not a palindrome" << endl;
  }
  return 0;
}
 
