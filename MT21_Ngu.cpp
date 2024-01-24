/*
CSC 134
M2T1 - Receipt Calculator
A Norris
1/24/24
*/
#include <iostream>
using namespace std;

int main () {
    // print receipt for a restaurant
    // The price befor tax
    // The a,ount of tax owed  (8%)
    // The total including tax 
    cout << "M2T1" << endl;
    // set up variable
    string meal_name = "Value Meal" ;
    double meal_price = 5.99 ;
    double tax_percent = 0.08 ;
    double tax_amount ;
    double total_price ; // meal + tax

    // Calculate the tax amount and the total price
    tax_amount = meal_price * tax_percent ;
    total_price = meal_price + tax_amount ; 
    // print receipt
    cout << "Thank you for dining with us" << endl ; 
    cout << endl;
    cout << meal_name << "\t" << "$" << meal_price << endl ;
    cout << "Tax (8%) " << "\t"<< "$" << tax_amount << endl;
    cout << "---------------------------" << endl;
    cout << "Total" << "\t\t" << "$" << total_price << endl;
    cout << endl;
    return 0; 
}
