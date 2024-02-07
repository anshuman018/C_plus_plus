#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  string input;
  getline(cin, input);
  string word = "";
  for (int i = 0; i < input.size(); i++) {

    if (input[i] == ' ') {
      reverse(word.begin(),word.end());
      cout << word<<" ";
      word = "";
    } else {
      word.push_back(input[i]);

    }
  }
  if(word!=""){
      reverse(word.begin(),word.end());
      cout<<word<<" ";
    }
  return 0;
}