/*
* Shaan Saini
* Anoosh Behbahani
* CIS 22A T/Th 3:30 - 5:20
*/

#include <iostream>
using namespace std;

int main()
{
    string sentence;
    int numWords = 1;
    int numLetters = 0;
    int guess;

    cout << "Think of a sentence in your mind.\nLater I will tell you how many words and letters are in your sentence." << endl << endl;

    cout << "Enter a guess for the number of letters in your sentence (don't count!): ";
    cin >> guess;

    cout << "Please enter your sentence: ";
    cin >> ws;

    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++) {
      if (sentence[i] == ' ') {
        numWords++;
      } else {
        numLetters++;
      }
    }
    cout << "\nThere are " << numWords << " words in \"" << sentence << "\"" << endl;
    cout << "And, " << numLetters << " letters.\n";

    if (guess == numLetters) {
        cout << "You guessed right!\n";
    } else {
        cout << "You guessed wrong!\n";
    }
}
