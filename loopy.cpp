/*
* Shaan Saini
* Chaitanya Angadala
* CIS22A T/Th 3:30 -5:20
*/

#include <iostream>
using namespace std;


int main() {
    int guess = 0;
    string repeat = "y";
    while ("y" == repeat) {
        cout << "I'm thinking of a number between"
             << " 1 and 10.\nCan you guess it?\n\n"
             << "Enter your guess: ";
        cin >> guess;

        if (7 == guess) {
        cout << "*** Correct! ***\n\n";
    } else {
        cout << "Sorry, that is not correct.\n";
        cout << "Try again.\n\n";
    }
        cout << "Do you want to play again? (y/n) ";
        cin >> repeat;
    }
    cout << "Game over\n";

    return 0;
}
