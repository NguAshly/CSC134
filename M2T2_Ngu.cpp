/*
CSC 134
M2T2 - My apple sales
A Ngu 
1/29/24
*/
#include <iostream>
using namespace std;

int main() {



string name;
int num_apples;
double price_per_apple;
double total;

// ask user for thier name
cout << "Hi, what's your name? ";
cin >> name;
cout << "Nice to meet you, " << name << endl;
// ask how many apples 
cout << "How many apples whould you like? ";
cin >> num_apples;
// ask price per apple
cout << "How much are they each? ";
cin >> price_per_apple;

// calculate the total price
total = num_apples * price_per_apple;

// print the output
// TODO: make a nice receipt
cout << " Hi my name is" << name << endl;
cout << "number of apples are" << num_apples << endl;
cout << "the apples cost" << price_per_apple << endl; 
cout << " total comes down to $ " << total << endl;
return 0;
}