/*
* Shaan Saini
* CIS 22A T/Th 3:30pm-5:20pm
*/

#include <iostream>
using namespace std;

int main()
{
    string input;

    cout << "Welcome!" << endl << "Enter the Card Notation: ";
    cin >> input;
    cout << "You entered: ";

    if (input.substr(0,1) == "A") {
        cout << "Ace";
    } else if (input.substr(0,1) == "2") {
        cout << "2";
    } else if (input.substr(0,1) == "3") {
        cout << "3";
    } else if (input.substr(0,1) == "4") {
        cout << "4";
    } else if (input.substr(0,1) == "5") {
        cout << "5";
    } else if (input.substr(0,1) == "6") {
        cout << "6";
    } else if (input.substr(0,1) == "7") {
        cout << "7";
    } else if (input.substr(0,1) == "8") {
        cout << "8";
    } else if (input.substr(0,1) == "9") {
        cout << "9";
    } else if (input.substr(0,1) == "J") {
        cout << "Jack";
    } else if (input.substr(0,1) == "Q") {
        cout << "Queen";
    } else if (input.substr(0,1) == "K") {
        cout << "King";
    }
    if (input.substr(0,2) == "10") {
        cout << "10";
        input.length() - 1;
        /*if (input.substr(2,1) == "D") {
            cout << " of Diamonds" << endl;
        } else if (input.substr(2,1) == "H") {
            cout << " of Hearts" << endl;
        } else if (input.substr(2,1) == "S") {
            cout << " of Spades" << endl;
        } else if (input.substr(2,1) == "C") {
            cout << " of Clubs" << endl;
        }*/
        else if (input.substr(1,1) == "D") {
            cout << " of Diamonds" << endl;
        } else if (input.substr(1,1) == "H") {
            cout << " of Hearts" << endl;
        } else if (input.substr(1,1) == "S") {
            cout << " of Spades" << endl;
        } else if (input.substr(1,1) == "C") {
            cout << " of Clubs" << endl;
        }
    }

    if (input.substr(1,1) == "D") {
        cout << " of Diamonds" << endl;
    } else if (input.substr(1,1) == "H") {
        cout << " of Hearts" << endl;
    } else if (input.substr(1,1) == "S") {
        cout << " of Spades" << endl;
    } else if (input.substr(1,1) == "C") {
        cout << " of Clubs" << endl;
    }
    return 0;
    //I know this program could be improved in many ways but I ran out of time!
}
