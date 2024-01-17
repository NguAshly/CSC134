/*
CSC 134
M1T1 - Hello World
A Norris
1/17/24
*/
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World" << endl;
  string pokeman = "Bulbasaur";
  cout << "My favorite pokemon is" << pokeman << endl;
  cout << "\n" << endl; // same thing 
  cout << "what's yours? "; 
  string answer;
  cin >> answer;
  cout << "you said " << answer << endl;
  cout << " I guess that's OK." << endl << endl;
  return 0;
}