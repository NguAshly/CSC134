// CSC 134
// M1LAB
// Ngu
// 2/12/2024

#include <iostream>
using namespace std;




int main() 
{
// Declare variables
int length1, width1, lenght2, width2;
int area1, area2;
// Ask te user for the width and lenght of two rectangles
cout << "Enter lenght and width of first rectangle, seperated by a space," << endl;
cin >> length1;
cin >> width1;

// calculate the areas
area1 = length1 * width1;
// print the areas
cout << "The first area is: " << area1 << endl;

// Tell them which one has a larger area.

return 0;
}