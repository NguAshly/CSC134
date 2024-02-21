// CSC 134
// M1LAB
// Ngu
// 1/31/2024

#include <iostream>
using namespace std;

int main() {
//cout << "Hello World!\n";
string name =  "Ngu";
int apples = 255;
double pricePerApple = 0.25;

cout << "Welcome to " << name;
cout << " apple farm" << endl;
cout << "We have " << apples << " apples for sale" << endl;
cout << "price is $" << pricePerApple << " each," << endl;

//now calculate total price
double totalprice = (double) apples + pricePerApple;
cout << "total price is: $10" <<totalprice <<endl;

}