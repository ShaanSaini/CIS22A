/*
* Shaan Saini
* CIS 22A T/Th 3:30pm-5:20pm
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    double price = 0;

    cout << "Enter the product name: ";
    cin >> name;
    cout << "Price of the " << name << ": ";
    cin >> price;

    cout << fixed             // fixed notation, not scientific
         << setprecision(2);  // show 2 decimal plac

    const int PERCENT = 100;
    double taxRate = 0;
    cout << "Enter sales tax rate (%): ";
    cin >> taxRate;
    double tax = price * taxRate / PERCENT;
    price += tax;

    cout << "Total price: $" << price << endl;

    int dollars = (int) price;
    cout << "In whole dollars: $" << dollars << endl;


    return 0;
}
