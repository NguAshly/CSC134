// CSC 134
// M2T1 - RNG
// Ngu
// 2/21/24

#include <iostream>
#include <cstdlib> // for rand()
#include <ctime> // for time()
using namespace std;

int main () {
    // Variables 
    int roll, die1, die2;
    int seed;
    cout <<  "Welcome to the craps table" << endl;
    cout << "Enter your lucky number: " << endl;
    seed = time(0); // close enough to truly random
    // set the random seed
    srand(seed);
    // roll the dice
    die1 = (rand() % 6) + 1; // roll 0-5, add 1
    die2 = (rand() % 6) + 1; // roll 0-5, add 1
    roll = die1 + die2;

    cout << "Your roll is: " << die1 << " and " << die2 << " ->" << roll << endl;
    
    if (roll== 7 || roll == 11) {
    cout << "You win!" << endl;
}
else if (roll == 2 || roll == 3 || roll == 12) {
    cout << "You loose..." << endl;
}
else {
    // Todo: roll the point
    cout << " Your point is " << roll << endl;
}

return 0;
}