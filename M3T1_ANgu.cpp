// CSC 134
// M1LAB
// Ngu
// 2/12/2024

#include <iostream>
using namespace std;




int main() 
{
// Declare variables
int len1, width1, len2, width2;
int area1, area2;
// Ask te user for the width and lenght of two rectangles
cout << "Enter lenght and width of first rectangle, seperated by a space," << endl;
cin >> len1;
cin >> width1;
cout << "Enter lenght and width of second rectangle, seperated by a space," << endl;
cin >> len2;
cin >> width2;

// calculate the areas
area1 = len1 * width1;
area2 = len2 * width2;
// print the areas
cout << "The first area is: " << area1 << endl;
cout << "The second area is: " << area2 << endl;

// Tell them which one has a larger area.
if (area1 > area2) {
    cout << "The first rectangle is larger." << endl;
}
else if (area1 < area2) {
    cout << "The second rectangle is larger." << endl;
}
if (area1 == area2) {
     cout << "The are the same size. " << endl;
}

return 0;
}