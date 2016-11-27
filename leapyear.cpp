/*
* Shaan Saini
* CIS 22A T/Th 3:30pm-5:20pm
*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    int remainder;

    cout << "Welcome! Enter a year and I will tell you whether it is a Leap Year!";
    cout << "\n\nPlease enter the year: ";
    cin >> year;
    if (year % 4 == 0) {
        cout << year << " is a Leap Year." << endl;
    }
    else {
        cout << year << " is not a Leap Year." << endl;
    }
}
