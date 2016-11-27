/*
* Shaan Saini
* CIS 22A T/Th 3:30pm - 5:20pm
*/

#include <iostream>
using namespace std;

int main()
{
    int base;
    string repeat = "y";

    do {

            cout << "I will print triangles for you!\n";
            cout << "Enter the width of the triangle's base: ";
            cin >> base;

            while (cin.fail() || base <= 0) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Please enter a positive whole number." << endl;
                cout << "Enter the width of the triangle's base: ";
                cin >> base;
            }

            cout << endl;

            for (int row = 1; row <= base; row++) {

                for (int col = 1; col <= row; col++) {

                    cout << "*";
                }

                cout << endl;
            }

            cout << endl;

            for (int row = base; row >= 1; row--) {

                for (int col = 1; col <= row; col++) {

                    cout << "*";
                }

                cout << endl;
            }

            cout << endl;
            cout << "Would you like me to print more triangles for you (y/n)? ";
            cin >> repeat;
            cout << endl;

    } while (repeat == "y" || repeat == "Yes" || repeat == "yes" ||repeat == "Y");

    cout << "Thank you!" << endl << "And, remember: programming is easy if you approach it from the right angle." << endl << endl;


}
