// CSC 134
// M3LAB1
// Ngu 
// 2/14/2024

#include <iostream>
using namespace std;

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice; 

  // ask the question
  cout << "Do you choose Door 1 or Door 2?" << endl;
  cout << "Type 1 or 2: "; 
  cin >> choice; 2;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You chose Door 1" << endl;
    cout << "From here you can go left (pres 1) or right (press 2)" << endl;
    cin >> choice; 1;

    // this function is called in main if the user chooses 1.
  cout << "You chose Door 1" << endl;
  cout << "You win a bowl of chipotle." << endl;

  }
  else if (2 == choice) {
  	cout << "You chose Door 2" << endl;
    cout << "you win a large box of pizza" << endl;
    
  }
  else  {
  	cout << "I'm sorry, that is not a valid choice." << endl;
    
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method