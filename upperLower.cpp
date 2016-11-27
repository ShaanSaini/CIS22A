/*
* Shaan Saini
* CIS 22A T/Th 3:30 - 5:20
*/

#include <iostream>
using namespace std;


int main () {

    string sentence;
    int currentChar;
    cout << "Please enter a sentence: ";
    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++) {
        currentChar = (int) sentence[i];
        if (currentChar >= 65 && currentChar <= 90) {
            currentChar += 32;
            sentence[i] = (char) currentChar;
        }
    }

    cout << "Your sentence in all lower case: " << sentence << endl;

    for (int i = 0; i < sentence.length(); i++) {
        currentChar = (int) sentence[i];
        if (currentChar >= 97 && currentChar <= 122) {
            currentChar -= 32;
            sentence[i] = (char) currentChar;
        }
    }

    cout << "Your sentence in all capitals: " << sentence << endl;
}
