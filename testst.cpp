/*
* Shaan Saini
* CIS 22A T/Th 3:30pm - 5:20pm
*/

#include <iostream>
using namespace std;

int main()
{
    int bottles;
    string generic1 = " bottles of beer on the wall!";
    string generic2 = " bottles of beer!";
    string generic3 = "You take one down, pass it around.";
    string generic4 = " bottles of beer on the wall.";
    const int MAX_BOTTLES = 99;
    const int MIN_BOTTLES = 1;
    //considered making generic strings substrings of generic1 but would just make code more complicated
    //changed the minimum bottles of beer to 1 and maximum number to 99
    //could have added an error output!

    cout << "Welcome! Let's sing the \"99 Bottles of Beer\" song!" << endl;
    cout << "Enter the number of bottles: ";

    cin >> bottles;
    cout << endl;

    for ((bottles; bottles > 1; bottles--) {
        if (bottles > 1) {
            if (bottles == 2) {
                generic4 = " bottle of beer on the wall.";
            }
            cout << bottles << generic1 << endl << bottles << generic2 << endl << generic3 << endl << --bottles << generic4 << endl << endl;
        } else {
            cout << bottles << " bottle of beer on the wall!" << endl << bottles << " bottle of beer!" << endl << generic3 << endl
                 << "No more bottles of beer on the wall." << endl;
            bottles--;
        }
    }
}
